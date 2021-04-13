#include <iostream>
#include <iomanip> 

using namespace std;

int main() {

	long long a, b;
	double c;

	cin >> a >> b;
	c = (double)a / b;
	cout << (a + b) << endl << (a - b) << endl << (a * b) << endl << fixed << setprecision(3) << c << endl;
	return 0;
}