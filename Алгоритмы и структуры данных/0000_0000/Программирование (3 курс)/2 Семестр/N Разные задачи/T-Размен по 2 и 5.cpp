#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <fstream> 
using namespace std;

int main() {
	int n, div;
	scanf("%d", &n);
	div = n % 5;
	if (div == 4 || div == 1) {
		printf("%d", n / 5 + 2);
	}
	else if (div == 3) {
		printf("%d", n / 5 + 3);
	}
	else if (div == 2) {
		printf("%d", n / 5 + 1);
	}
	else {
		printf("%d", n / 5);
	}
	return 0;
}
/*
Определите, каким количеством купюр по 2 и 5 гривен можно выдать сумму в N (8 ≤ N ≤ 1000000) гривен так, чтобы общее количество выданных купюр было минимальным.
*/