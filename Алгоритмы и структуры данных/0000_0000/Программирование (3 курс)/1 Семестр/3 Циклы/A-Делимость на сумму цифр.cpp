#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <iomanip> 
using namespace std;


long long a;
long long c;
long long b;
int main()
{
	
	scanf("%lld", &a);
	b = a;
	while (a >= 1) {
		c += a % 10;
		a = a / 10;
	}
	
	if (b % c == 0) {
		printf("YES");
	}else{
		printf("NO");
	}
}

