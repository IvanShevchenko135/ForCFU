    let mode = 1;
    
    c.moveTo(0, 0);
    c.lineTo(0, 400);
    c.lineTo(1500, 400);
    c.lineTo(1500, 0);
    c.lineTo(0, 0);
    c.fillStyle = 'DimGrey';
    c.fill();

    c.beginPath();
    c.moveTo(0, 30);
    c.lineTo(0, 50);
    c.lineTo(1500, 50);
    c.lineTo(1500, 30);
    c.lineTo(0, 30);
    c.fillStyle = 'White';
    c.fill();

    c.beginPath();
    c.moveTo(0, 350);
    c.lineTo(0, 370);
    c.lineTo(1500, 370);
    c.lineTo(1500, 350);
    c.lineTo(0, 350);
    c.fillStyle = 'White';
    c.fill();

    c.beginPath();
    c.moveTo(4, 120);
    c.bezierCurveTo(1, 160, 1, 240, 4, 280);
    c.lineTo(70, 300);
    c.lineTo(120, 295);
    c.lineTo(250, 295);
    c.lineTo(245, 315);
    c.quadraticCurveTo(262, 320, 261, 310);
    c.lineTo(263, 295);
    c.lineTo(330, 295);
    c.lineTo(340, 298);
    c.lineTo(400, 280);
    c.lineTo(420, 260);
    c.quadraticCurveTo(460, 200, 420, 140);
    c.lineTo(400, 120);
    c.lineTo(340, 102);
    c.lineTo(330, 105);
    c.lineTo(263, 105);
    c.lineTo(261, 90);
    c.quadraticCurveTo(262, 80, 245, 85);
    c.lineTo(250, 105);
    c.lineTo(120, 105);
    c.lineTo(70, 100);
    c.lineTo(4, 120);
    c.fillStyle = 'Red';
    c.fill();

    c.beginPath();
    c.moveTo(250, 145);
    c.lineTo(250, 255);
    c.lineTo(330, 270);
    c.quadraticCurveTo(350, 200, 330, 130);
    c.lineTo(250, 145);
    c.fillStyle = 'LightBlue';
    c.fill();
    c.stroke();

    c.beginPath();
    c.moveTo(110, 150);
    c.lineTo(110, 250);
    c.lineTo(70, 260);
    c.quadraticCurveTo(40, 200, 70, 140);
    c.lineTo(110, 150);
    c.fillStyle = 'LightBlue';
    c.fill();
    c.stroke();

    c.beginPath();
    c.moveTo(110, 150);
    c.lineTo(250, 145);
    c.moveTo(110, 250);
    c.lineTo(250, 255);
    c.stroke();

    function moveCar(dif) {

        let i;

        let timer = setInterval(function() {

            dif += mode;
    
            if (mode == -1) i = 440;
            else i = 0;

            if (dif < 0) {
                clearInterval(timer);
                mode *= -1;
                moveCar(0);
            }

            if (dif > 1060) {
                clearInterval(timer);
                mode *= -1;
                moveCar(1060,);
            }
            
            c.moveTo(0, 0);
            c.lineTo(0, 400);
            c.lineTo(1500, 400);
            c.lineTo(1500, 0);
            c.lineTo(0, 0);
            c.fillStyle = 'DimGrey';
            c.fill();
        
            c.beginPath();
            c.moveTo(0, 30);
            c.lineTo(0, 50);
            c.lineTo(1500, 50);
            c.lineTo(1500, 30);
            c.lineTo(0, 30);
            c.fillStyle = 'White';
            c.fill();
        
            c.beginPath();
            c.moveTo(0, 350);
            c.lineTo(0, 370);
            c.lineTo(1500, 370);
            c.lineTo(1500, 350);
            c.lineTo(0, 350);
            c.fillStyle = 'White';
            c.fill();
        
            c.beginPath();
            c.moveTo(i + mode * 4 + dif, 120);
            c.bezierCurveTo(i + mode * 1 + dif, 160, i + mode * 1 + dif, 240, i + mode * 4 + dif, 280);
            c.lineTo(i + mode * 70 + dif, 300);
            c.lineTo(i + mode * 120 + dif, 295);
            c.lineTo(i + mode * 250 + dif, 295);
            c.lineTo(i + mode * 245 + dif, 315);
            c.quadraticCurveTo(i + mode * 262 + dif, 320, i + mode * 261 + dif, 310);
            c.lineTo(i + mode * 263 + dif, 295);
            c.lineTo(i + mode * 330 + dif, 295);
            c.lineTo(i + mode * 340 + dif, 298);
            c.lineTo(i + mode * 400 + dif, 280);
            c.lineTo(i + mode * 420 + dif, 260);
            c.quadraticCurveTo(i + mode * 460 + dif, 200, i + mode * 420 + dif, 140);
            c.lineTo(i + mode * 400 + dif, 120);
            c.lineTo(i + mode * 340 + dif, 102);
            c.lineTo(i + mode * 330 + dif, 105);
            c.lineTo(i + mode * 263 + dif, 105);
            c.lineTo(i + mode * 261 + dif, 90);
            c.quadraticCurveTo(i + mode * 262 + dif, 80, i + mode * 245 + dif, 85);
            c.lineTo(i + mode * 250 + dif, 105);
            c.lineTo(i + mode * 120 + dif, 105);
            c.lineTo(i + mode * 70 + dif, 100);
            c.lineTo(i + mode * 4 + dif, 120);
            c.fillStyle = 'Red';
            c.fill();
        
            c.beginPath();
            c.moveTo(i + mode * 250 + dif, 145);
            c.lineTo(i + mode * 250 + dif, 255);
            c.lineTo(i + mode * 330 + dif, 270);
            c.quadraticCurveTo(i + mode * 350 + dif, 200, i + mode * 330 + dif, 130);
            c.lineTo(i + mode * 250 + dif, 145);
            c.fillStyle = 'LightBlue';
            c.fill();
            c.stroke();
        
            c.beginPath();
            c.moveTo(i + mode * 110 + dif, 150);
            c.lineTo(i + mode * 110 + dif, 250);
            c.lineTo(i + mode * 70 + dif, 260);
            c.quadraticCurveTo(i + mode * 40 + dif, 200, i + mode * 70 + dif, 140);
            c.lineTo(i + mode * 110 + dif, 150);
            c.fillStyle = 'LightBlue';
            c.fill();
            c.stroke();
        
            c.beginPath();
            c.moveTo(i + mode * 110 + dif, 150);
            c.lineTo(i + mode * 250 + dif, 145);
            c.moveTo(i + mode * 110 + dif, 250);
            c.lineTo(i + mode * 250 + dif, 255);
            c.stroke();
        }, 1);
    }

    function changeMode() {mode *= -1;}

    moveCar(0);