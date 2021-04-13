#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <cstring>

using namespace std;

int main() {
	char X[1001], Y[1001];
	scanf("%s%s", &X, &Y);
	int score = 0, missing = 0;
	int Y_Length = strlen(Y) - 1;

	for (int i = 0; X[Y_Length + i] != 0; i++) {
		for (int j = 0; Y[j] != 0; j++) {
			if (X[i + j] != Y[j]) {
				missing++;
			}
			if (missing > 1) {
				break;
			}
		}
		if (missing < 2) {
			score++;

		}
		missing = 0;
	}
	printf("%d", score);
	return 0;
}

/*
Назовем две строки близкими, если они имеют одинаковую длину и отличаются не более, чем на одну букву. Например, строки abracadabra и abraссdabra являются близкими, а строки abracadabra и aaracadabrr - нет, так как отличаются двумя буквами. Одинаковые строки также являются близкими.

Даны две строки X и Y, состоящие только из маленьких букв английского алфавита. Подсчитайте количество подстрок строки X, которые являются близкими к строке Y.
*/