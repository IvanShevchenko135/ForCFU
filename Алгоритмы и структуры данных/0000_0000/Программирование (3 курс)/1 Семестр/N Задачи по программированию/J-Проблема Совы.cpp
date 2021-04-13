#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;


int main()
{
	long long T, x, nmin, nmax;
	double nd;
	scanf("%lld", &T);
	for (int i = 0; i < T; i++) {
		scanf("%lld", &x);
		nd = sqrt(x + 1) - 1;

		nmin = nd;
		nmin = (nmin + 1)*(nmin + 1) - 1;
		
		nmax = ceil(nd);
		nmax = (nmax + 1)*(nmax + 1) - 1;

		printf("%lld %lld\n", nmin, nmax);
	}
	return 0;
}