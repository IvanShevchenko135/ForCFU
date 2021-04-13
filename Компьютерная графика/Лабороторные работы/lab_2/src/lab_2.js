var isRMB = false, x_cur, y_cur;
var x_dif = 250, y_dif = 250, scl = 1, scl_chng = 0, rot = 0;

document.getElementById('container');
container.addEventListener("wheel", onWheel);

canvas.onmousedown = function(event) 
{   
    if (event.button == 0) 
    {
        x_cur = event.pageX;
        y_cur = event.pageY;

        this.onmousemove = function(event) 
        {
            move(event.pageX - x_cur, event.pageY - y_cur);  

            x_cur = event.pageX;
            y_cur = event.pageY;
        }

        window.onmouseup = function() 
        {
            canvas.onmousemove = null;
            canvas.onmouseup = null;
        }
    }

    if (event.button == 2) 
    {
        isRMB = true;
        window.onmouseup = function() 
        {
            isRMB = false;
        }
    }
}

canvas.oncontextmenu = function() {return false;}

function draw() 
{
    if (rot > 0) rot -= 300;
    if (rot <= -300) rot += 300;
    document.getElementById('output').innerHTML = 
        "Сдвиг вправо: " + (x_dif - 250) + ". Сдвиг вверх: " + -(y_dif - 250) + 
	". Масштаб: " + scl + ". Поворот в градусах: " + -rot / 30 * 36 + ".";

    var x, y;

    c.clearRect(0, 0, 500, 500);
    c.beginPath();
    c.strokeStyle = 'Black';

    c.moveTo(250, 490);
    c.lineTo(250, 10);
    c.lineTo(260, 20);
    c.moveTo(250, 10);
    c.lineTo(240, 20);
    c.stroke();

    c.moveTo(10, 250);
    c.lineTo(490, 250);
    c.lineTo(480, 240);
    c.moveTo(490, 250);
    c.lineTo(480, 260);
    c.stroke();

    c.beginPath();
    c.strokeStyle = 'Red';

    for (var t = 0; t < 10 * Math.PI; t += 0.01)
    {
        x = 24.8 * (Math.cos(t) + (Math.cos(6.2 * t) / 6.2));
        y = 24.8 * (Math.sin(t) - (Math.sin(6.2 * t) / 6.2));

        c.lineTo((x * Math.cos(rot * 0.37) - y * Math.sin(rot * 0.37)) * scl + x_dif,
            -(x * Math.sin(rot * 0.37) + y * Math.cos(rot * 0.37)) * scl + y_dif);
    }

    c.stroke();
}

function onWheel(event) 
{
    if (isRMB == true) 
    {
        rot -= event.deltaY / 3;
    }
    else 
    {
        scl_chng += (-event.deltaY / 3);
        if (scl_chng == 0 || scl_chng == -1) 
        {
            if (scl >= 1) 
            {
                scl_chng = -2;
                scl = 0.5;	
            }
            else
            {
                scl_chng = 1;
                scl = 1;
            }
        }
        else if (scl_chng < 0) scl = 1/(-scl_chng);
        else scl = scl_chng;
    }
    draw();
}

function move(dif1, dif2)
{
    x_dif += dif1;
    y_dif += dif2;
    draw();
}

draw();