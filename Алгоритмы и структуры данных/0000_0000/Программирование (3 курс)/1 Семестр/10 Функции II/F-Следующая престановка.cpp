#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <cstring> 
#include <string> 
#include <stdlib.h>
using namespace std;

bool NextPermutation(int *p, int n){
	int min;
	bool ololo = false;
	
	for(int i = n - 2; i >= 0; i--){
		for(int j = i + 1; j < n; j++){
			if(p[i] < p[j]){ // Началось:D (Нашли скачек)
				min = i + 1;
				for(int k = i + 1; k < n; k++){ //Нахождение минимума из правой части
					if(p[k] < p[min] && p[k] > p[i]){
						min = k;
					}
				}
				swap(p[i], p[min]); //Перестановка минимального с i
				for(int l = i + 1; l < n - 1; l++){ //Сортировка правой части
					for(int r = l + 1; r < n; r++){
						if(p[l] > p[r]){
							swap(p[l], p[r]);
						}
					}
				}
				ololo = true;
				break;
			}
		}
		if(ololo){
			break;
		}
	}
	return ololo;
}

int main(){
	int N, mass[10000];
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%d", &mass[i]);
	}
	
	if(NextPermutation(mass, N)){
		for(int i = 0; i < N; i++){
			printf("%d ", mass[i]);
		}
	}else{
		printf("Not exist");
	}
	return 0;
}

/*
Напишите функцию, которая, получив массив с некоторой перестановкой натуральных чисел от 1 до N, сгенерирует в этом массиве следующую в лексикографическом порядке перестановку. Дополнительный массив заводить нельзя. Функция должна иметь следующий заголовок:

bool NextPermutation(int *p, int n);

где *p - указатель на массив с текущей перестановкой, а n - количество элементов в массиве p. Если следующей перестановки не существует, функция должна возвратить false. Если следующая перестановка получена, функция должна возращать true.

Напишите программу, которая вводит из стандартного потока ввода некоторый массив, содержащий N различных натуральных чисел в диапазоне от 1 до N и представляющий собой некоторую перестановку этих чисел, и выводит следующую в лексикографическом порядке перестановку. Для получения перестановки воспользуйтесь написанной функцией. Стандартную функцию использовать нельзя.
*/