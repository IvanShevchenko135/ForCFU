#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;


int main()
{
	long long a[3];
	scanf("%lld%lld%lld", &a[0], &a[1], &a[2]);
	if (a[0] <= a[1] && a[0] <= a[2]) {
		printf("%lld", a[0]);
	}
	else if (a[1] <= a[0] && a[1] <= a[2]) {
		printf("%lld", a[1]);
	}
	else {
		printf("%lld", a[2]);
	}
	return 0;
}