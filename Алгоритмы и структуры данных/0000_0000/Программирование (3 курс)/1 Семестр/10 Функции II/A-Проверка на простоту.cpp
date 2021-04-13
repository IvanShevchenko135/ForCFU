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

int const keks = 1000001;
long long prime[keks];


bool isPrime(long long N){
	for(int i = 1; prime[i] * prime[i] < N + 1; i++){
		if(N % prime[i] == 0 && N != 2){
			return false;
		}
	}
	return true;
}

int main(){
	long long G[keks];
	int num = 0;
	for(int i = 2; i < 1000; i++){
		if(G[i] == 0){
			for(int j = i * i; j < keks; j+=i){
				G[j] = 1;
			}
		}
	}
	for(int i = 1; i < keks; i++){
		if(G[i] == 0){
			prime[num++] = i;
		}
	}
	int T;
	scanf("%d", &T);
	while(T--){
	long long N;
		scanf("%lld", &N);
		if(isPrime(N)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}

/*
Напишите программу, которая будет проверять на простоту каждое из T заданных во входном потоке натуральных чисел.

Для проверки чисел на простоту напишите функцию, которая будет получать в качестве аргумента натуральное число N, большее единицы, и возвращать логическое значение true, если число N является простым, и false - если нет. Используйте решето Эратосфена.

Заголовок функции должен иметь вид:

bool isPrime(long long N);

Если необходимо, функция может использовать глобальные массивы и переменные.

*/