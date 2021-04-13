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

int A[1005], B[1005], C[1005];
char s1[1003], s2[1003];

void SumLong(int *A, int *B, int *C){
	int k = A[0];
	if(B[0] > A[0]) k = B[0];
	for(int i = 1; i <= k; i++){
		C[i + 1] = (A[i] + B[i]+C[i])/10000;
		C[i] = (A[i] + B[i] + C[i])%10000;
	}
	C[0] = k;
	if(C[k+1] != 0) C[0]++;
	printf("%d", C[C[0]]);
	for(int i = C[0] - 1; i > 0; i--){
		printf("%04d", C[i]);
	}
	printf("\n");
}

void ReadLong(char *s, int *A){
	int n = strlen(s), sys = 4, i, k;
	A[0] = n/sys;
	if(n % sys != 0){
		A[0]++;
	}
	for(i = n - sys; i >= 0; i -= sys){
		k++;
		for(int j = 0; j < sys; j++){
			A[k] = A[k] * 10 + (int)(s[i+j] - '0');
		}
	}
	
	if(i < 0){
		i++;
		k++;
	}
	for(int j = 0; j < sys + i - 1; j++){
		A[k] = A[k] * 10 + (int)(s[j] - '0');
	}
}

int main(){
	scanf("%s%s", &s1, &s2);
	ReadLong(s1, A);
	ReadLong(s2, B);
	SumLong(A, B, C);
	return 0;
}

/*
Найдите сумму двух целых неотрицательных чисел A и B.
*/