#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <iomanip> 
using namespace std;


long long a;
long long c;
int main()
{

	scanf("%lld", &a);
	while (a != 0) {
		c += a % 10;
		a = a / 10;
	}
	printf("%lld", c);
	cin >> a;
}