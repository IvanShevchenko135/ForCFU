#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	int A, B, C, X1, X2, D;

	cin >> A >> B >> C;
	D = pow(B, 2) - 4 * A * C;
	X1 = (-B - sqrt(D)) / (A * 2);
	X2 = (-B + sqrt(D)) / (A * 2);
	cout << X1 << " " << X2 << endl;
	return(0);
}