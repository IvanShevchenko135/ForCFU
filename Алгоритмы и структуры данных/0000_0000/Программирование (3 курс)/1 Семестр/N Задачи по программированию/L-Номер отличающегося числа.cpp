#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;


int main()
{
	long long T;
	scanf("%lld", &T);
	for (int i = 0; i < T; i++) {
		long long a, b, c, d;
		scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
		if ((a == b) && (b == c)) {
			printf("4\n");
		}
		else if ((a == b) && (b == d)) {
			printf("3\n");
		}
		else if ((a == c) && (c == d)) {
			printf("2\n");
		}
		else {
			printf("1\n");
		}
	}
}