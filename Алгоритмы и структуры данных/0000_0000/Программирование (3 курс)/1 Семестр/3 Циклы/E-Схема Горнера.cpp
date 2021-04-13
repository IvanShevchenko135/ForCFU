#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;


int main()
{
	unsigned long long A, N, M, summ = 1, temp = 1;
	scanf("%llu%llu%llu", &A, &N, &M);
	for (int i = 1; i <= N; i++) {
		temp = (temp * A) % M;
		summ = (summ + temp) % M;
	}
	printf("%llu", summ);
	return 0;
	//(a*b)%c = ((a%c)*(b%c))%c
	//(a^0+a^1+a^2+a^3)%c = ((a^0)%c+(a^1)%c+(a^2)%c+(a^3)%c)%c = (1%c+a%c+(a*a)%c+(a*a*a)%c)%c = (1%c+a%c+(a%c*a%c)%c+(a%c*a%c*a%c)%c)%c
}