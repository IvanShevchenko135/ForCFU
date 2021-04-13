#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	double Ax, Ay, Bx, By, Cx, Cy;
	double b, c;
	double dif = 1e-9;

	cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;
	b = sqrt(((Ax - Bx) * (Ax - Bx)) + ((Ay - By) * (Ay - By)));
	c = sqrt(((Ax - Cx) * (Ax - Cx)) + ((Ay - Cy) * (Ay - Cy)));
	if (abs(b - c) < dif) {
		cout << fixed << setprecision(9) << "equal" << endl << b << endl;
	}
	else if (b < c) {
		cout << fixed << setprecision(9) << "B" << endl << b << endl;
	}
	else {
		cout << fixed << setprecision(9) << "C" << endl << c << endl;
	}
	return 0;
}