#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;

int main()
{
	long long T, a, b, c;
	scanf("%lld", &T);
	for (int i = 0; i < T; i++) {
		scanf("%lld%lld%lld", &a, &b, &c);
		if (a == b && b == c && c == a) {
			printf("1\n");
		}
		else if (a == b || b == c || c == a) {
			printf("2\n");
		}
		else {
			printf("3\n");
		}
	}
	return 0;
}