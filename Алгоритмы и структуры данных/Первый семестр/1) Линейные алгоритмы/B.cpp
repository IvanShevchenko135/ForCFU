#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

	double a, b, K_A, K_B, M_A, M_B;

	cin >> a >> b;
	K_A = pow(a, 2);
	K_B = pow(b, 2);
	M_A = abs(a);
	M_B = abs(b);
	cout << fixed << setprecision(3) << (K_A + K_B) / 2;
	cout << " ";
	cout << fixed << setprecision(3) << (M_A + M_B) / 2 << endl;
	return(0);
}