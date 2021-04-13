#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

long long T, a, b;
double S, P, c;

int main() {
	cin >> T;
	while (T--) {
		cin >> a >> b;
		c = sqrt(a * a + b * b);
		P = a + b + c;
		S = (a * b) / (double)2;
		cout << fixed << setprecision(3) << P << " " << S << endl;
	}
	//system("pause");
	return 0;
}