<?php 
	$link = mysqli_connect('localhost', 'user', 'user', 'lab_8'); 
	$table = $_POST['table'];

	if (!$link) { 
		echo "Ошибка подключения к базе данных. Код ошибки: ".mysqli_connect_error(); 
		exit; 
	} 

	if ($table === 'cities') 
	{
		$name = $_POST['name'];
		$country = $_POST['country'];
		$area = $_POST['area'];
		$population = $_POST['population'];
	
		$query = 'INSERT INTO ' . $table . ' (name, country, area, population) ' . 'VALUES' . ' ("' . $name . '", "' . $country . '", "' . $area . '", "' . $population . '") ';

		if ($result = mysqli_query($link, $query)) 
		{
			echo "Строка добавлена успешно.";
		} 
		else 
		{
			echo "Ошибка!";
		}
	}
	else 
	{
		$name = $_POST['name'];
		$city_name = $_POST['city_name'];
		$address = $_POST['address'];
		$foundation_date = $_POST['foundation_date'];

		$query = 'INSERT INTO ' . $table . ' (name, city_name, address, foundation_date) ' . 'VALUES' . ' ("' . $name . '", "' . $city_name . '", "' . $address . '", "' . $foundation_date . '") ';

		if ($result = mysqli_query($link, $query)) 
		{
			echo "Строка добавлена успешно.";
		} 
		else 
		{
			echo "Ошибка!";
		}
	}

	mysqli_close($link); 
	
	echo "<br><br><button onclick=\"history.go(-1);\">ОК</button>";
?>

