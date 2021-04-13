#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;

int main()
{
	long long a, b, c;
	scanf("%lld", &c);

	for (int i = 0; i < c; i++) {
		scanf("%lld %lld", &a, &b);

		while (a != 0 && b != 0) {
			if (a > b) {
				a %= b;
			}
			else {
				b %= a;
			}
		}

		printf("%d\n", a + b);
	}
	return 0;
}