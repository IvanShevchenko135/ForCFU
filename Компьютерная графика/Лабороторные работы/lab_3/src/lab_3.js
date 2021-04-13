function putPixel(x, y, color) {
    let imageData = c.createImageData(1, 1);

    imageData.data[0] = color[0];        
    imageData.data[1] = color[1];        
    imageData.data[2] = color[2];      
    imageData.data[3] = 255 * color[3];      

    c.putImageData(imageData, x, y);
}
 
function int_part(a) {
    res = 0;
    while (a >= 1) {
        a--;
        res++;
    }
    return res;
}
 
function fract_part(a) {
    while (a >= 1) a--;
    return a;
}

function round(a) {
    return int_part(a + 0.5);
}

function isEqual(arr1, arr2) {
    if (arr1.length != arr2.length) return false;
    for (i = 0; i < arr1.length; i++) {
        if (arr1[i] != arr2[i]) return false;
    }
    return true; 
}

function drawLine(x1, y1, x2, y2, color) {
    let dx = Math.abs(x1 - x2), dy = Math.abs(y1 - y2);
    if (dx > dy) {

        if (x2 < x1) {
            [x1, x2] = [x2, x1];
            [y1, y2] = [y2, y1];
        }
        if (y1 > y2) dy *= -1
        let gradient = dy / dx;
        let cur_y = y1;

        for (var cur_x = x1; cur_x <= x2; cur_x++) {
            color[3] = 1 - fract_part(cur_y);
            putPixel(cur_x, int_part(cur_y), color);
            color[3] = fract_part(cur_y)
            putPixel(cur_x, int_part(cur_y) + 1, color);
            cur_y += gradient;
        }
    }
    else {

        if (y2 < y1) {
            [x1, x2] = [x2, x1];
            [y1, y2] = [y2, y1];
        }

        if (x1 > x2) dy *= -1
        let gradient = dx / dy;
        let cur_x = x1;

        for (var cur_y = y1; cur_y <= y2; cur_y++) {
            color[3] = 1 - fract_part(cur_x);
            putPixel(int_part(cur_x), cur_y, color);
            color[3] = fract_part(cur_x);
            putPixel(int_part(cur_x) + 1, cur_y, color);
            cur_x += gradient;
        }
    }
    color[3] = 1;
}

function drawCircle(x, y, radius, color) {
    var xi = 0, yi = radius, gap = 0, delta = (2 - 2 * radius);
    while (yi >= 0) {
        putPixel(x + xi, y + yi, color);
        putPixel(x + xi, y - yi, color);
        putPixel(x - xi, y + yi, color);
        putPixel(x - xi, y - yi, color);
        gap = 2 * (delta + yi) - 1;
        if (delta < 0 && gap <= 0) {
            xi++;
            delta += 2 * xi + 1;
            continue;
        }
        if (delta > 0 && gap > 0) {
            yi--;
            delta -= 2 * yi + 1;
            continue;
        }
        xi++;
        delta += 2 * (xi - yi);
        yi--;
    }
}

function drawRectangle(x1, y1, x2, y2, color) {
    drawLine(x1, y1, x2, y1, color);
    drawLine(x2, y1, x2, y2, color);
    drawLine(x2, y2, x1, y2, color);
    drawLine(x1, y2, x1, y1, color);

    if (x1 < x2) {
        putPixel(x1 + 1, y1, color);
        putPixel(x1 + 1, y2, color);
        putPixel(x2 - 1, y1, color);
        putPixel(x2 - 1, y2, color);
    }
    else {
        putPixel(x2 + 1, y1, color);
        putPixel(x2 + 1, y2, color);
        putPixel(x1 - 1, y1, color);
        putPixel(x1 - 1, y2, color);
    }
    if (y1 < y2) {
        putPixel(x1, y1 + 1, color);
        putPixel(x2, y1 + 1, color);
        putPixel(x1, y2 - 1, color);
        putPixel(x2, y2 - 1, color);
    }
    else {
        putPixel(x1, y1 - 1, color);
        putPixel(x2, y1 - 1, color);
        putPixel(x1, y2 + 1, color);
        putPixel(x2, y2 + 1, color);
    }
}

function drawTriangle(x1, y1, x2, y2, x3, y3, color) {
    drawLine(x1, y1, x2, y2, color);
    drawLine(x2, y2, x3, y3, color);
    drawLine(x3, y3, x1, y1, color);
}

function drawSpline(color) {
    let p_x = [];
    let p_y = [];

    for (let i = 1; i < arguments.length; i += 2) {
        p_x[(i - 1) / 2] = arguments[i];
        p_y[(i - 1) / 2] = arguments[i + 1];
    }

    for (let i = 1; i < p_x.length - 2; i++) {
        a3 = (-p_x[i - 1] + 3 * p_x[i] - 3 * p_x[i + 1] + p_x[i + 2]) / 6;
        a2 = (p_x[i - 1] - 2 * p_x[i] + p_x[i + 1]) / 2;
        a1 = (-p_x[i - 1] + p_x[i + 1]) / 2;
        a0 = (p_x[i - 1] + 4 * p_x[i]+ p_x[i + 1]) / 6;

        b3 = (-p_y[i - 1] + 3 * p_y[i] - 3 * p_y[i + 1] + p_y[i + 2]) / 6;
        b2 = (p_y[i - 1] - 2 * p_y[i] + p_y[i + 1]) / 2;
        b1 = (-p_y[i - 1] + p_y[i + 1]) / 2;
        b0 = (p_y[i - 1] + 4 * p_y[i]+ p_y[i + 1]) / 6;

        for (var t = 0; t <= 1; t += 0.01) {
            let x = (((a3 * t + a2) * t + a1) * t + a0);
            let y = (((b3 * t + b2) * t + b1) * t + b0);
            putPixel(x, y, color);
        }
    }
}

function fillArea(x, y, color) { 
    var prev_color = c.getImageData(x, y, 1,1).data;
        
    let queue = [x, y];
    let start = 0, end = queue.length;
    
    while (start != end) {
    
        let x_i = queue[start++]; 
	let y_i = queue[start++];
	
        var cur_color = c.getImageData(x_i, y_i, 1,1).data;
        if(x_i >= 0 && y_i >= 0 && x_i <= 500 && y_i <= 500 && cur_color[0] == prev_color[0] && cur_color[1] == prev_color[1] && cur_color[2] == prev_color[2] && cur_color[3] == prev_color[3]){
            putPixel(x_i, y_i, color);
            queue[end++] = x_i + 1;
	    queue[end++] = y_i;
	    queue[end++] = x_i - 1;
	    queue[end++] = y_i;
	    queue[end++] = x_i;
            queue[end++] = y_i - 1;
            queue[end++] = x_i;
            queue[end++] = y_i + 1;
        }
    }
}

drawTriangle(10, 80, 45, 10, 80, 80, [255, 0, 0, 1]);
drawLine(45, 45, 45, 65, [90, 40, 5, 1]);
drawLine(46, 55, 55, 55, [90, 40, 5, 1]);
drawCircle(45, 55, 10, [90, 40, 5, 1]);
drawLine(55, 110, 55, 150, [90, 40, 5, 1]);
drawRectangle(10, 80, 80, 150, [0, 0, 0, 1]);
drawSpline([90, 40, 5, 1], 43, 106, 57, 111, 69, 106, 80, 111, 91, 106);
fillArea(45, 15, [255, 0, 0, 1]);
fillArea(70, 135, [90, 40, 5, 1]); 
putPixel(70, 135, [0, 0, 0, 1]);