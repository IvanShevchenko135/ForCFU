#define _CRT_SECURE_NO_WARNINGS 
#include <iostream> 
#include <cstdlib> 
#include <stdio.h> 
#include <string> 
#include <set> 
#include <fstream> 
#include <algorithm> 
#include <math.h> 
#include <queue> 
#include <iterator> 
#include <map>
using namespace std;

long long T, N, numb[10];
string s;
int main() {
	scanf("%lld", &T);
	while (T--) {
		int score = 0;
		cin >> s;
		for (int i = 0; i < 10; i++) {
			numb[i] = 0;
		}
		int leng = s.length();
		for (int i = 0; i < leng; i++) {
			if (numb[s[i] - '0'] != 0) {
				score++;
			}
			numb[s[i] - '0']++;
		}
		score = score + (10 - leng);
		printf("%d\n", score);
		for (int i = 0; i < 10; i++) {
			if (numb[i] == 0) {
				if (numb[i] == 0) {
					if (score == 1) {
						printf("%d", i);
					}
					else {
						printf("%d ", i);
						score--;
					}
				}
			}
		}
		printf("\n");
	}
	return 0;
}
/*
Задача J: Номер телефона
Задан номер телефона длиной не более 10 цифр. Определить, какие цифры отсутствуют в этом номере.

Input
Входные данные начинаются с числа Т - это количество телефонных номеров, которые будут идти далее. Следующие Т строк содержат телефонные номера. Каждый номер содержится в отдельной строке.

Output
Для каждого телефонного номера из входных данных вывести две строки. В первой строке вывести количество отсутствующих в номере цифр. Во второй строке вывести отсутствующие цифры в порядке возрастания.

Примеры
Входные данные
3
0631562976
0426578943
0126456788
Результат работы
2
4 8
1
1
2
3 9
*/