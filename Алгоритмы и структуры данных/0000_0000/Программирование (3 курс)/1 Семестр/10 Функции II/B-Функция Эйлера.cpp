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



long long Euler(long long N){
	long long result = N;

	for(int i = 2; i <= sqrt(N); i++){
		if(N % i == 0){
			while(N % i == 0){
				N = N / i;
			}
			result = result - (result / i);
		}
	}
	if(N > 1){
		result = result - (result / N);
	}
	return result;
}

int main(){
	long long N;
	scanf("%lld", &N);
	printf("%lld\n", Euler(N));
	return 0;
}

/*
Функция Эйлера φ(n) — это количество чисел от 1 до n, взаимно простых с n. Иными словами, это количество таких чисел в отрезке [1; n], наибольший общий делитель которых с n равен единице.

Функция Эйлера используется в некоторых алгоритмах криптографии, и важно уметь ее быстро вычислять.

Функцию Эйлера для любого n можно получить через его факторизацию (разложение n на простые сомножители). Если
*/