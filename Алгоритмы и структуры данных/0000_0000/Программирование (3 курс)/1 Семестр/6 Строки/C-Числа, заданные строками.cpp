#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <cstring>
using namespace std;

int main()
{
	char s[100000];
	long long notation, ost = 1000000007, result = 0;
	scanf("%lld%s", &notation, &s);


	for (int i = 0; i < strlen(s); i++) {
		if (s[i] > 57) {
			s[i] = s[i] - 7;
		}
		result = (((int)(s[i] - '0') + result * notation) % ost) % ost;
	}

	printf("%lld", result);

	return 0;
}

/*
 Вам будет задано основание системы счисления и число, записанное в системе с этим основанием. Найдите остаток от деления этого числа, переведенного в десятичную систему, на 10^9 + 7;
 */