#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <string>
using namespace std;

double f(long long num){
	double mult = 0;
	double summ = 0;
	for(int i = 1; i * 2< num; i++)
	mult -= 2 * log(i);
	for(int i = 1; i + 1 < num; i++)
	mult += log(i);
	mult += (num - 2) * log(0.5);
	summ = exp(mult);
	return summ;
}

int main(){
	long long n;
	scanf("%lld", &n);
	printf("%.4lf", f(n));
	return 0;
}
/*
Для заданного четного натурального числа n вычислить значение функции
*/