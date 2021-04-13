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

int prime[10000];
int primeend[10000];
int main() {
	prime[0] = 1;
	prime[1] = 1;
	for (int i = 2; i <= 100; i++) {
		if (prime[i] == 0) {
			for (int j = i * i; j <= 10000; j += i) {
				prime[j] = 1;
			}
		}
	}
	int j = 0;
	for (int i = 0; i < 10000; i++) {
		if (prime[i] == 0) {
			primeend[j++] = i;
		}
	}
	int T;
	scanf("%d", &T);
	while (T--) {
		int N, M;
		scanf("%d%d", &N, &M);
		printf("%d\n", primeend[N - 1] * primeend[M - 1]);
	}
	return 0;
}

