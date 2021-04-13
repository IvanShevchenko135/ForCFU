#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;

long double a, b, c, d;
int main()
{

	cin >> a;
	cin >> b;
	c = ((a*a) + (b*b)) / 2;
	d = (abs(a) + abs(b)) / 2;

	cout << c << endl;
	cout << d << endl;
	return 0;
}