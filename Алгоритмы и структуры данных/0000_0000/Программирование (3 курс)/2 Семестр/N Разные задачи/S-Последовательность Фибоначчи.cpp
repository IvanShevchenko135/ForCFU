#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <fstream> 
using namespace std;

using namespace std;
int main(){
	int mass[100];
	int n;
	mass[0] = 1;
	mass[1] = 1;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		mass[i + 2] = mass[i] + mass[i + 1];
	}

	for (int i = 0; i < n; i++) {
		printf("%d\n", mass[i]);
	}
}