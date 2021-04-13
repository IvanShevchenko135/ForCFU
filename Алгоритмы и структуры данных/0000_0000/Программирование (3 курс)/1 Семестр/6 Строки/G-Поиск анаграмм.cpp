#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <cstring> 
#include <string> 
using namespace std;


int main() {
	char X[10001], Y[10001];
	int temp = 0, score = 0, v_X[26], v_Y[26];
	scanf("%s%s", &X, &Y);
	
	for (int i = 0; i < 26; i++) {
		v_X[i] = 0;
		v_Y[i] = 0;
	}

	for (int i = 0; i < strlen(X); i++) {
		v_X[(int)(X[i] - 'a')]++;
	}

	for (int i = 0; i < strlen(Y) - strlen(X) + 1; i++) {
		for (int j = 0; j < strlen(X); j++) {
			v_Y[(int)(Y[i + j] - 'a')]++;
		}
		for (int k = 0; k < 26; k++) {
			if (v_X[k] != v_Y[k]) {
				temp++; 
			} 
		}
		if (temp == 0) { 
			score++; 
		}
		temp = 0;
		for (int l = 0; l < 26; l++) {
			v_Y[l] = 0;
		}

	}

	printf("%d", score);
	return 0;
}

/*
Строка A называется анаграммой строки S, если строка A сотоит из тех же букв, что и строка S, но расположенных в другом порядке. Например, строка AABB является анаграммой строки ABBA, а строка cadaabrabra является анаграммой строки abracadabra. Строка является анаграммой самой себя.

Вам будут даны две строки X и Y. Напишите программу, которая посчитает, сколько подстрок строки Y являются анаграммами строки X.
*/