#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <string>
using namespace std;

long long modd(long long A, long long N, long long M){
	int ost = 1;
	while (N) {
		if (N % 2 == 0) {
			N /= 2;
			A = (A * A)%M;
		}
		else {
			N--;
			ost = (ost * A)%M;
		}
	}
	return ost % M;
}


int main() {
	long long a, n, m;
	while(scanf("%lld%lld%lld", &a, &n, &m) != EOF){
		printf("%lld\n", modd(a, n, m));
	}
	return 0;
}

/*
Напишите функцию, вычисляющую значение a^n mod m для целых неотрицательных чисел a, n, m.

С помощью этой функции посчитайте a^n mod m для заданных значений.
*/