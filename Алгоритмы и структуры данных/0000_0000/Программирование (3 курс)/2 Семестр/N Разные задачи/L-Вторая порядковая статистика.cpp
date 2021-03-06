#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstring> 
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <fstream> 
using namespace std;


int main() {
	int mass[1000], temp, n;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &mass[i]);
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (mass[i] > mass[j]) {
				swap(mass[i], mass[j]);
			}
		}
	}
	temp = mass[0];
	for (int i = 1; i < n; i++) {
		if (mass[i] > temp) {
			printf("%d", mass[i]);
			return 0;
		}
	}

	printf("NO");
	return 0;
}

/*
Задача L: Вторая порядковая статистика
Однажды Васе понадобилось найти вторую порядковую статистику последовательности целых чисел, то есть такое значение, которое попадет на второе место после сортировки всех различных элементов данной последовательности. Другими словами, надо найти наименьший элемент строго больший минимума. Помогите Васе справиться с этой задачей.

Входные данные
В первой строке входных данных содержится целое число n (1 ≤ n ≤ 100) — количество чисел в последовательности. Во второй строке через пробел записаны n целых чисел — элементы последовательности. Эти числа не превосходят по модулю 100.
Выходные данные
Если в заданной последовательности вторая порядковая статистика существует, выведите ее, иначе выведите NO.
*/