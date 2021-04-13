 #include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main() {
	long double a, b;
	cin >> a >> b;
	cout << fixed << setprecision(0) << a + b << endl << a - b << endl << a * b << endl << setprecision(3) << a / b;
	return 0;
}