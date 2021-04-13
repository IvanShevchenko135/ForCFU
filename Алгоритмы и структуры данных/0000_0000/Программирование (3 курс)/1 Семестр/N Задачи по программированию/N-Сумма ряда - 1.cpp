#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;


int main()
{
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		double N, A, B, X = 0, cons = 0;
		scanf("%lf%lf%lf", &N, &A, &B);
		X = A;
		for (int j = 0; j < N; j++) {
			X += cons;
			cons = (B - A) / (N - 1);
			printf("X=%.3lf F(X)=%.3lf\n", X, 1 - sin(X));
		}
	}
	return 0;
}