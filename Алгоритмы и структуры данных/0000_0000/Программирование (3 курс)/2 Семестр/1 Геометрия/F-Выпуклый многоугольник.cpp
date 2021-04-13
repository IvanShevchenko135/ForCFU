#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <fstream> 
using namespace std;


int main() {
	int n; 
	int kord[200000][2];
	int min1 = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &kord[i][0], &kord[i][1]);
	}

	int dx1 = kord[0][0] - kord[1][0];
	int dy1 = kord[0][1] - kord[1][1];
	int dx2 = kord[2][0] - kord[1][0];
	int dy2 = kord[2][1] - kord[1][1];
	long long a = dx1 * dy2 - dy1 * dx2;


	for (int i = 1; i <= n + 1; i++) {
		int dx1 = kord[i % n][0] - kord[(i + 1) % n][0];
		int dy1 = kord[i % n][1] - kord[(i + 1) % n][1];
		int dx2 = kord[(i + 2) % n][0] - kord[(i + 1) % n][0];
		int dy2 = kord[(i + 2) % n][1] - kord[(i + 1) % n][1];
		long long b = dx1 * dy2 - dy1 * dx2;
		if ((a < 0 && b > 0) || (a > 0 && b < 0)) {
			printf("NO");
			return 0;
		}
		if (a == 0) {
			a = b;
		}
	}
	printf("YES");
	return 0;
}
/*
Определить, является ли заданный многоугольник выпуклым.
*/