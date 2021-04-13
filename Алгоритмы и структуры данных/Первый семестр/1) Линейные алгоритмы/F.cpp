#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	
	short int a, b;
	double c;
	cin >> a >> b;
	c = sqrt(pow(a, 2) + pow(b, 2));
	cout << fixed << setprecision(6) << c << endl;
	return(0);
}