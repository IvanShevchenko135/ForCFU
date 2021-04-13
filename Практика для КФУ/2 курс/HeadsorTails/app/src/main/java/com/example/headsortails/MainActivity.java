package com.example.headsortails;

//Подключение пакетов
import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.Gravity;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.Toast;

import java.util.Random;

//Главное окно приложения с подключенной возможностью обработки нажатия
public class MainActivity extends AppCompatActivity implements View.OnClickListener {

    Button buttonFlip;
    Button buttonCancel; //Объявление объектов для кнопок
    Button buttonQuit;
    ImageView imageCoinHeads;
    ImageView imageCoinTails; //Объявление объектов для изображений
    ImageView imageUnknownSide;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        //Загрузка графического интерфейса из файла activity_main.xml на экран девайса
        setContentView(R.layout.activity_main);

        //Привязка объектов к соотвтствующим элементам графического интерфейса
        imageCoinHeads = (ImageView)findViewById(R.id.coinHeads);
        imageCoinTails = (ImageView)findViewById(R.id.coinTails);
        imageUnknownSide = (ImageView)findViewById(R.id.unknownSide);
        buttonFlip = (Button)findViewById(R.id.buttonFilp);
        buttonCancel = (Button)findViewById(R.id.buttonCancel);
        buttonQuit = (Button)findViewById(R.id.buttonQuit);

        //Установка обработки нажатия на кнопки
        buttonFlip.setOnClickListener(this);
        buttonCancel.setOnClickListener(this);
        buttonQuit.setOnClickListener(this);
    }

    //Обработка нажатия на кнопки
    @Override
    public void onClick(View view) {

        //Обработка нажатия на кнопку "Выход"
        if (view.getId() == R.id.buttonQuit) {
            System.exit(0);
        }

        //Обработка нажатия на кнопку "Бросить монету"
        if (view.getId() == R.id.buttonFilp) {
            //Генерация случайного числа (0 или 1)
            Random randInt = new Random();
            int coinSide = randInt.nextInt(2);

            //Создание всплывающих окон
            Toast headsToast = Toast.makeText(getApplicationContext(),
                    "Решка",
                    Toast.LENGTH_SHORT);
            headsToast.setGravity(Gravity.TOP, 0, 50);

            Toast tailsToast = Toast.makeText(getApplicationContext(),
                    "Орёл",
                    Toast.LENGTH_SHORT);
            tailsToast.setGravity(Gravity.TOP, 0, 50);

            //Скрывает изображение с вопросительным знаком
            imageUnknownSide.setVisibility(View.INVISIBLE);

            //Отображение соответствующей сторомы монеты и всплывающего окна
            if (coinSide == 0) {
                imageCoinHeads.setVisibility(View.VISIBLE);
                headsToast.show();
            } else {
                imageCoinTails.setVisibility(View.VISIBLE);
                tailsToast.show();
            }

            //Изменение кнопки "Бросить монету" на "Отмена"
            buttonFlip.setVisibility(View.INVISIBLE);
            buttonCancel.setVisibility(View.VISIBLE);
        }

        //Обработка нажатия на кнопку "Отмена"
        if (view.getId() == R.id.buttonCancel) {
            imageCoinHeads.setVisibility(View.INVISIBLE);
            imageCoinTails.setVisibility(View.INVISIBLE);
            imageUnknownSide.setVisibility(View.VISIBLE);
            buttonCancel.setVisibility(View.INVISIBLE);
            buttonFlip.setVisibility(View.VISIBLE);
        }
    }
}