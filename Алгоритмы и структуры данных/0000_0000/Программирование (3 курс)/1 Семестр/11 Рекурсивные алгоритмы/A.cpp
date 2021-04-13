#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <string>
using namespace std;

int re(int N, int M) {
	if (M <= N) {
		printf("%d ", M++);
		re(N, M);
	}
	return 0;
}

int main() {
	int N, m = 1;;
	scanf("%d", &N);
	re(N, m);
	return 0;
}

/*
Напишите программу, которая выводит все числа от 1 до заданного N (1 ≤ N ≤ 100). В программе запрещается использовать операторы цикла! Воспользуйтесь рекурсивной процедурой.
*/