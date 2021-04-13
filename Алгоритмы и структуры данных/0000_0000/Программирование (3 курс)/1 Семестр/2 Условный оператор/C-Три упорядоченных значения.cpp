#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;

int main()
{
	int X[3], temp;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &X[i]);
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3 - i - 1; j++) {
			if (X[j] > X[j + 1]) {
				temp = X[j];
				X[j] = X[j + 1];
				X[j + 1] = temp;

			}
		}
	}

	printf("%.6lf\n ", (pow(X[2], 2) - pow(X[0], 2)) / (pow(X[1], 2) - pow(X[0], 2)));
	return 0;
}