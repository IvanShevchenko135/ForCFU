function isLeft(a, b, c) {
    let s = (a[0] * b[1] + b[0] * c[1] + c[0] * a[1]) - (a[1] * b[0] + b[1] * c[0] + c[1] * a[0]);
	if (s < 0) return true;
	else return false;
}

function mySort1(a, b) {
	if (a[0] < b[0]) return -1;
	else if (a[0] == b[0]) {
		if (a[1] < b[1]) return -1;
		else if (a[1] == b[1]) return 0;
		else return 1;
	}
	else return 1;
}

function mySort2(a, b) {
	if (isLeft(min, a, b) && isLeft(min, b, a)) return 0;
	else if(isLeft(min, a, b)) return -1;
	else return 1;
}

function s(a, b, c) {
	return Math.abs((b[0] - a[0]) * (c[1] - a[1]) - (c[0] - a[0]) * (b[1] - a[1])) / 2;
}

function isInside(a, b, c, d) {
	if (s(a, b, c) === (s(a, b, d) + s(a, c, d) + s(b, c, d))) return true;
	else return false;
}

canvas.onmousedown = function(event) 
{   
    let x = Math.floor(event.pageX);
    let y = Math.floor(event.pageY);
    
    c.beginPath();
    c.arc(x, y, 3, 0, 2*Math.PI, false);
    c.stroke();
    c.fill();

    points.push([x - 250, 250 - y]);

    if (x - 250 < min[0]) min = [x - 250, 250 - y];
}

function triangulate() {
	//points.sort(mySort1);
	//points.sort(mySort2);
	let start_rot = isLeft(points[0], points[1], points[2]);
	t = 1;
    while (points.length > 2) {
    	let output = document.getElementById('output');

    	let a1 = points[0];
	    let a2 = points[1];
	    let a3 = points[2];

	    if (isLeft(a1, a2, a3) == start_rot) {
	    	let chk = true;
	    	for (let i = 3; i < points.length; i++) {
	    		if (isInside(a1, a2, a3, points[i])) {
	    			chk = false;
	    			break;
	    		}
	    	}
	    	if (chk == true) {
	    		c.beginPath();
	    		c.moveTo(a1[0] + 250, 250 - a1[1]);
	    		c.lineTo(a2[0] + 250, 250 - a2[1]);
	    		c.lineTo(a3[0] + 250, 250 - a3[1]);
	    		c.lineTo(a1[0] + 250, 250 - a1[1]);
	    		c.stroke();
	    		output.innerHTML += ("Треугольник " + t + ": </br>"); 
	    		output.innerHTML += ("x1 = " + a1[0] + ", y1 = " + a1[1] + "</br>"); 
	    		output.innerHTML += ("x2 = " + a2[0] + ", y2 = " + a2[1] + "</br>"); 
	    		output.innerHTML += ("x3 = " + a3[0] + ", y3 = " + a3[1] + "</br>"); 
	    		output.innerHTML += ("</br>"); 
	    		t++;
	    		points.splice(1, 1);
	    	}
	    	else {
	    		let first = points.shift();
	    		points.push(first);
	    	}
	    }
	    else {
			let first = points.shift();
			points.push(first);
		}
	}
	button = document.getElementById('btn');
	button.style.display = "none";
}

let points = [];

let min = [1000, 1000];

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