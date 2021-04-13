<?php
	echo "<html> <head> <meta charset=\"UTF-8\"><title>Лабораторная работа №3</title></head><body>";
	for ($i = 1; $i < 5; $i++)
	{ 
		$x[$i - 1] = $_POST[$i];
	}
	for ($i = 5; $i < 9; $i++)
	{ 
		$y[$i - 5] = $_POST[$i];
	}

	$O1x = ($x[0] + $x[1]) / 2;
	$O1y = ($y[0] + $y[1]) / 2;
	$O2x = ($x[2] + $x[3]) / 2; 
	$O2y = ($y[2] + $y[3]) / 2;

	$r1 = sqrt(($x[0] - $x[1]) * ($x[0] - $x[1]) + ($y[0] - $y[1]) * ($y[0] - $y[1])) / 2;
	$r2 = sqrt(($x[2] - $x[3]) * ($x[2] - $x[3]) + ($y[2] - $y[3]) * ($y[2] - $y[3])) / 2;

	$d = sqrt(($O1x - $O2x) * ($O1x - $O2x) + ($O1y - $O2y) * ($O1y - $O2y) ) / 2;
	if ($r1 + $r2 > $d && $r1 + $d > $r2 && $r2 + $d > $r1) echo "Пересекаются" . "<br>";
	else echo "Не пересекаются" . "<br>";
	echo "<button onclick=\"window.location.href='lab_3.html'\"style=\"margin-top: 15px; width: 100px; height: 30px;\">Назад</button>";
	echo "</body></html>";
?>