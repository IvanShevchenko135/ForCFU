<?php 
 
/* Подключение к серверу MySQL */ 
$link = mysqli_connect( 
            'localhost',  /* Хост, к которому мы подключаемся */ 
            'user',       /* Имя пользователя */ 
            'user',   /* Используемый пароль */ 
            'lab_8');     /* База данных для запросов по умолчанию */ 
 
if (!$link) { 
   echo "Ошибка подключения к базе данных. Код ошибки: ".mysqli_connect_error(); 
   exit; 
} 
 
/* Посылаем запрос серверу */ 
if ($result = mysqli_query($link, 'SELECT * FROM cities')) { 
 
    echo "Пять крупнейших стран мира: <br>"; 
 
    /* Выборка результатов запроса */ 
    while( $row = mysqli_fetch_assoc($result) ){ 
        echo $row['name'] . "<br>"; 
    } 
 
    /* Освобождаем используемую память */ 
    mysqli_free_result($result); 
} 
 
/* Закрываем соединение */ 
mysqli_close($link); 
?>