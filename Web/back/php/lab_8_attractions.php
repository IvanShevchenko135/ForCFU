<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>Лабораторная работа №8</title>
</head>
<body>

	<div style="text-align: center;">
		<h1>Введите информацию о достопримечательности</h1>
		<form id="save_form" action="/lab_8_save.php" method="post" name="save"> 
			<p style="font-weight: bold;">Название:</p>
			<input name="name" type="text" required> <br>

			<p style="font-weight: bold;">Город:</p>
			<select name="city_name" style="width: 177px; height: 21px">
			<?php 
				$link = mysqli_connect('localhost', 'user', 'user', 'lab_8');     
			
				if (!$link) { 
					echo "Ошибка подключения к базе данных. Код ошибки: ".mysqli_connect_error(); 
					exit; 
				} 

				if ($result = mysqli_query($link, 'SELECT name FROM cities')) 
				{
					while($row = mysqli_fetch_assoc($result)) 
					{ 
						echo "<option value=\"" . $row['name'] . "\">" . $row['name'] . "</option>"; 
					}

					mysqli_free_result($result); 
				} 

				mysqli_close($link); 
			?>
			</select> <br>

			<p style="font-weight: bold;">Адресс:</p>
			<input name="address" type="text" required> <br>

			<p style="font-weight: bold;">Дата основания:</p>
			<input name="foundation_date" type="date" required> <br>

			<input type="submit" name="submit_btn" value="Сохранить информацию" style="margin-top: 30px; width: 200px; height: 30px; font-weight: bold;">
			
			<input value="attractions" name="table" type="text" style="display: none;">
		</form>
        <a href="lab_8.php"><button style="margin: 10px auto; width: 200px; height: 30px; font-weight: bold;">Найти запись</button></a>
        <br>
        <a href="lab_8_cities.html"><button style="margin: 0 auto; width: 200px; height: 30px; font-weight: bold;">Добавить город</button></a>
	</div>

</body>
</html>