#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;


long long mass1[1000000], mass2[1000000], N, K, d = 0, g = 0;
int main() {
	scanf("%d", &N); //Input one
	for (int i = 0; i < N; i++) {
		scanf("%lld", &mass1[i]);
	}

	scanf("%d", &K); //Input two
	for (int i = 0; i < K; i++) {
		scanf("%lld", &mass2[i]);
	}


	while (d + g < N + K) { //Output
		if (d < N && g < K) {
			if (mass1[d] < mass2[g]) {
				printf("%lld ", mass1[d++]);
			}
			else if (mass1[d] == mass2[g]) {
				printf("%lld %lld ", mass1[d++], mass2[g++]);
			}
			else {
				printf("%lld ", mass2[g++]);
			}
		}
		else {
			if (d < N) {
				printf("%lld ", mass1[d++]);
			}
			else {
				printf("%lld ", mass2[g++]);
			}
		}
	}
	return 0;
}