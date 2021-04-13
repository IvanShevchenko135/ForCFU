#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <cstring>
using namespace std;

long long sd(long long num) {
	long long num2 = 0;
	if (num < 10) {
		return num;
	}
	else {
		while (num != 0) {
			num2 += num % 10;
			num /= 10;
		}
		return sd(num2);
	}
}


int main() {
	char N[10000000];
	int k;
	long long summ = 0;
	scanf("%s%d", &N, &k);
	int len = strlen(N);
	for (int i = 0; i < len; i++) {
		summ += (int)(N[i] - '0');
	}
	k *= sd(summ);
	printf("%lld", sd(k));
	return 0;
}

/*
Определим суперцифру для некоторого натурального числа x следующим образом:

Если x состоит из одной цифры, то его суперцифра - это x.
Если число x состоит из нескольких цифр, то его суперцифра равна суперцифре суммы цифр числа x.
Например, суперцифра числа 9875 вычисляется следующим образом:

super_digit(9875) = super_digit(9+8+7+5)
                  = super_digit(29)
                  = super_digit(2+9)
                  = super_digit(11)
                  = super_digit(1+1)
                  = super_digit(2)
                  = 2.
Вам будут даны два числа - n и k. Найдите суперцифру числа p, образованого конкатерацией числа n k раз. Например, если n = 123 и k = 3, то p = 123123123.
*/