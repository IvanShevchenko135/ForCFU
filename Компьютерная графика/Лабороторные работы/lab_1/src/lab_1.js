c.moveTo(100, 50);
c.lineTo(100, 550);
c.lineTo(900, 550);
c.lineTo(900, 50);
c.lineTo(100, 50);
c.fill();

c.moveTo(490, 550);
c.lineTo(490, 600);
c.lineTo(510, 600);
c.lineTo(510, 550);
c.lineTo(490, 550);
c.fill();

c.beginPath();
c.moveTo(400,600);
c.quadraticCurveTo(500, 550, 600, 600);
c.quadraticCurveTo(500, 750, 400, 600);
c.fill();

c.beginPath();
c.moveTo(852,540);
c.arc(850, 540, 2, 0, 2*Math.PI, false)
c.fillStyle = 'Blue';
c.fill();

c.beginPath();
c.moveTo(120, 70);
c.lineTo(120, 530);
c.lineTo(880, 530);
c.lineTo(880, 70);
c.lineTo(120, 70);
c.fillStyle = 'DarkTurquoise';
c.fill();

c.beginPath();
c.moveTo(450, 225);
c.lineTo(450, 270);
c.lineTo(495, 270);
c.lineTo(495, 225);
c.lineTo(450, 225);
c.fillStyle = 'OrangeRed';
c.fill();

c.beginPath();
c.moveTo(505, 225);
c.lineTo(505, 270);
c.lineTo(550, 270);
c.lineTo(550, 225);
c.lineTo(505, 225);
c.fillStyle = 'YellowGreen';
c.fill();

c.beginPath();
c.moveTo(450, 280);
c.lineTo(450, 325);
c.lineTo(495, 325);
c.lineTo(495, 280);
c.lineTo(450, 280);
c.fillStyle = 'SteelBlue';
c.fill();

c.beginPath();
c.moveTo(505, 280);
c.lineTo(505, 325);
c.lineTo(550, 325);
c.lineTo(550, 280);
c.lineTo(505, 280);
c.fillStyle = 'Gold';
c.fill();

function moveLogo(x_dif, y_dif, x_sgn, y_sgn) {
    let i = 0;

    let timer = setInterval(function() {

        i++;

        if ((x_dif + x_sgn * i) > 328) {
            clearInterval(timer);
            moveLogo(x_dif + x_sgn * i, y_dif + y_sgn * i, -1, y_sgn);
        }

        if ((x_dif + x_sgn * i) < -328) {
            clearInterval(timer);
            moveLogo(x_dif + x_sgn * i, y_dif + y_sgn * i, 1, y_sgn);
        }

        if ((y_dif + y_sgn * i) > 202) {
            clearInterval(timer);
            moveLogo(x_dif + x_sgn * i, y_dif + y_sgn * i, x_sgn, -1);
        }

        if ((y_dif + y_sgn * i) < -154) {
            clearInterval(timer);
            moveLogo(x_dif + x_sgn * i, y_dif + y_sgn * i, x_sgn, 1);
        }
        
        c.beginPath();
        c.moveTo(120, 70);
        c.lineTo(120, 530);
        c.lineTo(880, 530);
        c.lineTo(880, 70);
        c.lineTo(120, 70);
        c.fillStyle = 'DarkTurquoise';
        c.fill();

        c.beginPath();
        c.moveTo(450 + x_dif + x_sgn * i, 225 +  y_dif + y_sgn * i);
        c.lineTo(450 + x_dif + x_sgn * i, 270 +  y_dif + y_sgn * i);
        c.lineTo(495 + x_dif + x_sgn * i, 270 +  y_dif + y_sgn * i);
        c.lineTo(495 + x_dif + x_sgn * i, 225 +  y_dif + y_sgn * i);
        c.lineTo(450 + x_dif + x_sgn * i, 225 +  y_dif + y_sgn * i);
        c.fillStyle = 'OrangeRed';
        c.fill();
        
        c.beginPath();
        c.moveTo(505 + x_dif + x_sgn * i, 225 +  y_dif + y_sgn * i);
        c.lineTo(505 + x_dif + x_sgn * i, 270 +  y_dif + y_sgn * i);
        c.lineTo(550 + x_dif + x_sgn * i, 270 +  y_dif + y_sgn * i);
        c.lineTo(550 + x_dif + x_sgn * i, 225 +  y_dif + y_sgn * i);
        c.lineTo(505 + x_dif + x_sgn * i, 225 +  y_dif + y_sgn * i);
        c.fillStyle = 'YellowGreen';
        c.fill();

        c.beginPath();
        c.moveTo(450 + x_dif + x_sgn * i, 280 +  y_dif + y_sgn * i);
        c.lineTo(450 + x_dif + x_sgn * i, 325 +  y_dif + y_sgn * i);
        c.lineTo(495 + x_dif + x_sgn * i, 325 +  y_dif + y_sgn * i);
        c.lineTo(495 + x_dif + x_sgn * i, 280 +  y_dif + y_sgn * i);
        c.lineTo(450 + x_dif + x_sgn * i, 280 +  y_dif + y_sgn * i);
        c.fillStyle = 'SteelBlue';
        c.fill();
        
        c.beginPath();
        c.moveTo(505 + x_dif + x_sgn * i, 280 +  y_dif + y_sgn * i);
        c.lineTo(505 + x_dif + x_sgn * i, 325 +  y_dif + y_sgn * i);
        c.lineTo(550 + x_dif + x_sgn * i, 325 +  y_dif + y_sgn * i);
        c.lineTo(550 + x_dif + x_sgn * i, 280 +  y_dif + y_sgn * i);
        c.lineTo(505 + x_dif + x_sgn * i, 280 +  y_dif + y_sgn * i);
        c.fillStyle = 'Gold';
        c.fill();

    }, 20);
}

moveLogo(0, 0, 1, 1);