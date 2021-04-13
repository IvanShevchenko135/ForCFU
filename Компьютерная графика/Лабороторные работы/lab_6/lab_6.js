let chk_x1 = false, chk_x2 = false, chk_y1 = false, chk_y2 = false, chk_z1 = false, chk_z2 = false;
let angle = [1.8, 0.7, -0.2]

function increaseAngleX() {
    timer = setInterval(function () {
        if (chk_x1 == false) clearInterval(timer);
        angle[0] += 0.02;
        c.clearRect(0, 0, 700, 700);
        draw();
    }, 20);
}

function reduceAngleX() {
    timer = setInterval(function () {
        if (chk_x2 == false) clearInterval(timer);
        angle[0] -= 0.02;
        c.clearRect(0, 0, 700, 700);
        draw();
    }, 20);
}

function increaseAngleY() {
    timer = setInterval(function () {
        if (chk_y1 == false) clearInterval(timer);
        angle[1] += 0.02;
        c.clearRect(0, 0, 700, 700);
        draw();
    }, 20);
}

function reduceAngleY() {
    timer = setInterval(function () {
        if (chk_y2 == false) clearInterval(timer);
        angle[1] -= 0.02;
        c.clearRect(0, 0, 700, 700);
        draw();
    }, 20);
}

function increaseAngleZ() {
    timer = setInterval(function () {
        if (chk_z1 == false) clearInterval(timer);
        angle[2] += 0.02;
        c.clearRect(0, 0, 700, 700);
        draw();
    }, 20);
}

function reduceAngleZ() {
    timer = setInterval(function () {
        if (chk_z2 == false) clearInterval(timer);
        angle[2] -= 0.02;
        c.clearRect(0, 0, 700, 700);
        draw();
    }, 20);
}

var pointField = [];// массив точек графика


var moveByOfCase = []; //как двигаться по массиву точек графика
var startPointOfCase = [];//начальный елемент массива точек графика
var endPointOfCase = [];//конечный елемент массива точек графика

var expandDigre = 50;//Масштабирование графика в N раз


var horizontBuffHeight = [];//буфер верхнего горизонта
var horizontBuffLow = [];//буфер нижнего горизонта
var horizontBuffLeft = [];//буфер левостороннего горизонта
var horizontBuffRight = [];//буфер правостороннего горизонта

//начальная инициализация горизонтов не заданными.
function fillHorizontBuffs() {
    for (let i = 0; i <= canvas.height; i += 1) {
        horizontBuffHeight[i] = 0;
        horizontBuffLow[i] = canvas.height;
        horizontBuffLeft[i] = canvas.width;
        horizontBuffRight[i] = 0;
    }

}

function doNesRotationAndMovesAndInvertY(point) {

    let x = point[0], y = -point[1], z = point[2];

    {
        let cur_z = z, cur_y = y;
        z = Math.cos(angle[0]) * cur_z - Math.sin(angle[0]) * cur_y;
        y = Math.cos(angle[0]) * cur_y + Math.sin(angle[0]) * cur_z;
    }

    {
        let cur_x = x, cur_z = z;
        x = Math.cos(angle[1]) * cur_x - Math.sin(angle[1]) * cur_z;
        z = Math.sin(angle[1]) * cur_x + Math.cos(angle[1]) * cur_z;
    }

    {
        let cur_y = y, cur_x = x;
        y = Math.cos(angle[2]) * cur_y - Math.sin(angle[2]) * cur_x;
        x = Math.cos(angle[2]) * cur_x + Math.sin(angle[2]) * cur_y;
    }

    x *= 50;
    y *= 50;
    z *= 50;

    x += 350;
    y += 350;

    return [x, y, z];
}

//фукция, которая проверяет можно ли отрисовать точку.
function isPointCorrect(Pnt, isFirst, prevPnt) {

    //флаг корректнотси.
    var correct = false;

    var x = Math.round(Pnt[0]); // координата округляется, тк используется как инедкс по массиву
    var y = Pnt[1];


    //проверка на: выше ли этот Y текущего макс. значения Y-горизонта на X координате
    if (horizontBuffHeight[x] < y) {
        c.strokeStyle = "red";
        correct = true;
        horizontBuffHeight[x] = y;
    }

    //проверка на: ниже ли этот Y текущего мин. значения Y-горизонта на X координате
    if (horizontBuffLow[x] > y) {
        c.strokeStyle = "green";
        correct = true;
        horizontBuffLow[x] = y;
    }

    y = Math.round(Pnt[1]);//координата округляется, тк используется как инедкс по массиву
    x = Pnt[0];


    //проверка на: правее ли этот X текущего правого значения X-горизонта на Y координате
    if (horizontBuffRight[y] < x) {
        horizontBuffRight[y] = x;
        correct = true;
    }

    //проверка на: левее ли этот X текущего левого значения X-горизонта на Y координате
    if (horizontBuffLeft[y] > x) {
        horizontBuffLeft[y] = x;
        correct = true;
    }

    //если точка дозволена, то нужно выстроить новые горизонты.
    if (correct) {
        if (isFirst === false) { //выстраиваем новый горизонт, только если есть предыдущая точка

            let dx = (-Pnt[0] + prevPnt[0]) / 20; //шаг по X-координате до пред. точки
            let dy = (-Pnt[1] + prevPnt[1]) / 20; //шаг по Y-координате до пред. точки

            x = Pnt[0];
            y = Pnt[1];

            //цикл, пока рассматриваемая точка не совпала с предыдущей
            //выстраиваем новый горизонт, сравнивая все точки между
            //текущей и предыдущей точками, идём по прямой.
            while (Math.abs(x - prevPnt[0]) > 1e-6 && Math.abs(y - prevPnt[1]) > 1e-6) {
                if (horizontBuffHeight[Math.round(x)] < y) {
                    horizontBuffHeight[Math.round(x)] = y;
                }

                if (horizontBuffLow[Math.round(x)] > y) {
                    horizontBuffLow[Math.round(x)] = y;
                }

                if (horizontBuffLeft[Math.round(y)] > x) {
                    horizontBuffLeft[Math.round(y)] = x;
                }

                if (horizontBuffRight[Math.round(y)] < x) {
                    horizontBuffRight[Math.round(y)] = x;
                }

                x += dx;
                y += dy;
            }
        }
    }

    return correct;//вернуть являеются ли координаты числом и допустима ли точка
}

//отрисовка точки
function drawPoint(Pnt) {
    var halfSize = 5;
    c.fillRect(Math.round(Pnt[0]) - halfSize, Math.round(Pnt[1]) - halfSize, 2 + halfSize, 2 + halfSize);

}

//отрисовка линии
function drawLines(Pnt) {
    c.lineTo(Pnt[0], Pnt[1]);
    //.log(Pnt);
}

//заполнения массива точек
//X и Y выбираются, а результат их функции обязательно записывается
//в Z
function fillPointField() {

}


//для алгоритма важно, чтобы отрисовка начиналась от точки
//"ближайшей" по Z-координате к пользователю
function whicIsCloser() {
    let initialPoint = makeDrawable(pointField[0][0]);
    let z = initialPoint[2];
    var cnt = 0;
    var a, b, tmp;

    a = 0;
    b = pointField[0].length - 1;
    tmp = doNesRotationAndMovesAndInvertY(pointField[a][b]);
    if (z < tmp[2]) {
        z = tmp[2];
        cnt = 1;
    }

    a = pointField.length - 1;
    tmp = doNesRotationAndMovesAndInvertY(pointField[a][b]);
    if (z < tmp[2]) {
        z = tmp[2];
        cnt = 3;
    }

    a = pointField.length - 1;
    b = 0;

    tmp = doNesRotationAndMovesAndInvertY(pointField[a][b]);
    if (z < tmp[2]) {
        z = tmp[2];
        cnt = 2;
    }

    return cnt;
}

function draw() {

    var Case = whicIsCloser();//хранит какая из начальноых точек граней "ближе"

    var start = startPointOfCase[Case];//начальная точка массива точек для отрисовки случая Case
    var end = endPointOfCase[Case];//конечная точка массива точек для отрисовки случая Case
    var moveBy = moveByOfCase[Case];// как двигаться по массиву точек в случае Case

    fillHorizontBuffs();//изначально считать горизонт не заданным

    //цикл обхода массива точек
    for (let i = start[0]; i != end[0]; i += moveBy[0]) {

        c.beginPath();
        var prev = start;
        var isFirst = true;//флаг, что точка первая в отрисовке линии

        for (let j = start[1]; j != end[1]; j += moveBy[1]) {

            var tmp = pointField[i][j];//временно хранит точку графика
            var point = doNesRotationAndMovesAndInvertY(tmp);//хранит обработанную точку графика

            //если первая точка, то сделать начальной для отрисовки
            if (isFirst) {
                c.moveTo(point[0], point[1]);
                prev = point;
                isFirst = false;
            }
            //проверка на отрисовку точки
            if (isPointCorrect(point, isFirst, prev) === true) {
                c.lineTo(point[0], point[1]);
                isFirst = false;
            } else {

                c.stroke();
                c.closePath();
                c.beginPath();
            }
            prev = point;
        }

        c.stroke();
        c.closePath();

    }

}

for (let x = -5; x <= 5; x += 0.05) {
    let tmp = [];
    for (let y = -5; y <= 5; y += 0.05) {
        tmp.push([x, y, Math.sin(x)]);
    }
    pointField.push(tmp);
}

moveByOfCase.push([1, 1, 0]);
moveByOfCase.push([1, -1, 0]);
moveByOfCase.push([-1, 1, 0]);
moveByOfCase.push([-1, -1, 0]);

startPointOfCase.push([0, 0, 0]);
startPointOfCase.push([0, pointField[0].length - 1, 0]);
startPointOfCase.push([pointField.length - 1, 0, 0]);
startPointOfCase.push([pointField.length - 1, pointField[pointField.length - 1].length - 1, 0]);

endPointOfCase.push([pointField.length - 1, pointField[pointField.length - 1].length - 1, 0]);
endPointOfCase.push([pointField.length - 1, 0, 0]);
endPointOfCase.push([0, pointField[0].length - 1, 0]);
endPointOfCase.push([0, 0, 0]);

draw();