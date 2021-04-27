<!DOCTYPE html>
<html>

<head>
    <meta charset="UTF-8">
    <title>Лабораторная работа №8</title>
</head>

<body>

    <div style="text-align: center; margin: 0 auto; width: 230px;">
        <h1>Поиск</h1>

        <form action="lab_8.php" method="post">
            <p style="font-weight: bold;">Поиск по:</p>

            <div style="text-align: left; margin: 0 auto; width: 210px;">
                <input type="radio" id="cities" name="field" value="cities" checked>
                <label for="cities">Городам</label><br>
                <input type="radio" id="attractions" name="field" value="attractions">
                <label for="attractions">Достопримечательность</label><br>
            </div>

            <p style="font-weight: bold;">Название:</p>
            <input name="name" type="text" required> <br>

            <input type="submit" name="submit_btn" value="Найти" style="margin-top: 30px; width: 200px; height: 30px; font-weight: bold;">
        </form>
        <a href="lab_8_cities.html"><button style="margin-top: 10px; width: 200px; height: 30px; font-weight: bold;">Добавить город</button></a>
        <a href="lab_8_attractions.php"><button style="margin-top: 10px; width: 200px; height: 40px; font-weight: bold;">Добавить достопримечательность</button></a>
    </div>
    <?php 
		echo "<div id=\"query_resault\">";
		echo "<h1>Результаты поиска:</h1>";
		echo "
			<script>
				function show() 
				{
					block = document.getElementById(\"query_resault\");
					block.style.display = \"block\";
				}
				function hide() 
				{
					block = document.getElementById(\"query_resault\");
					block.style.display = \"none\";
				}
			</script>
		";
	
        $link = mysqli_connect('localhost', 'user', 'user', 'lab_8');     
    
        if (!$link) { 
            echo "Ошибка подключения к базе данных. Код ошибки: ".mysqli_connect_error(); 
            exit; 
        } 

		$field = $_POST['field'];
		$value = $_POST['name'];
		$query = 'SELECT * FROM ' . $field . ' WHERE name="' . $value . '"';
		
		if (empty($field)) echo "<script> hide(); </script>";
		else echo "<script> show(); </script>";
		
        if ($result = mysqli_query($link, $query)) 
        {	
			if ($result->num_rows == 0) echo "По запросу ничего не найдено. <br>";
			else 
			{
				if ($field === "cities") 
				{
					echo 'Название ' . 'Страна ' . 'Площадь ' . 'Население' . "<br>"; 
					echo '------------------------------------------------' . "<br>"; 
					
					while($row = mysqli_fetch_assoc($result)) 
					{ 
						echo $row['name'] . " " . $row['country'] . " " . $row['population'] . " чел. " . $row['area'] . " км² <br>"; 
					}

					mysqli_free_result($result); 
				}
				else 
				{
					echo 'Название ' . 'Город ' . 'Адресс ' . 'Год основания' . "<br>"; 
					echo '--------------------------------------------------' . "<br>"; 
					
					while($row = mysqli_fetch_assoc($result)) 
					{ 
						echo $row['name'] . " " . $row['city_name'] . " " . $row['address'] . " " . $row['foundation_date'] . "<br>"; 
					}

					mysqli_free_result($result); 
				}
			}
        } 
        mysqli_close($link); 
		echo "<button onclick=\"hide();\" style=\"margin-top: 30px; width: 200px; height: 40px; font-weight: bold;\">OK</button>";
		echo "</div>";
    ?>
</body>

</html>