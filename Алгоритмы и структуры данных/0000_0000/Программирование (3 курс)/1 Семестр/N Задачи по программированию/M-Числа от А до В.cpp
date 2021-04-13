#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;


int main()
{
	int T, a, b;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d%d", &a, &b);
		printf("%d\n", b - a + 1);
		for (int i = a; i <= b; i++) {
			if (i == b) {
				printf("%d\n", i);
			}
			else {
				printf("%d ", i);
			}
		}
	}
	return 0;
}