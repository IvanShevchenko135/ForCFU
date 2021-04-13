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
	for (int i = 0; i < 3; i++) {
		if (a[i] < 0) {
			a[i] = pow(a[i], 2);
		}
		else {
			a[i] = pow(a[i], 3);
		}
	}
	printf("%lld %lld %lld", a[0], a[1], a[2]);
	cin >> a[1];
	return 0;
}