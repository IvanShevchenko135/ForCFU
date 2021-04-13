#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

	int x, y;
	double angle;
	const double pi = 2 * acos(0);

	cin >> x >> y;
	if (x == 0) {
		if (y > 0)
			angle = pi / 2;
		else if (y < 0)
			angle = 3 * (pi / 2);
		else
			angle = 0;
	}
	else {
		angle = atan((double)y / x);
		if (x < 0 && y > 0) {
			angle = pi + angle;
		}
		if (x < 0 && y <= 0)
			angle += pi;
		if (x > 0 && y < 0) {
			angle = 2 * pi + angle;
		}
	}
	cout << fixed << setprecision(6) << angle << endl;
	//system("pause");
	return 0;
}