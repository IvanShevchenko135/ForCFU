#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

	int y1, y2, y3, x1, x2, x3, l1, l2, l3, l4, l5, l6;
	double S, a, b, c, p;

	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	l1 = x2 - x1;
	l2 = y2 - y1;
	a = sqrt(pow(l1, 2) + pow(l2, 2));
	l3 = x3 - x2;
	l4 = y3 - y2;
	b = sqrt(pow(l3, 2) + pow(l4, 2));
	l5 = x1 - x3;
	l6 = y1 - y3;
	c = sqrt(pow(l5, 2) + pow(l6, 2));
	p = (a + b + c) / 2;
	S = sqrt(p*(p - a)*(p - b)*(p - c));
	cout << fixed << setprecision(6) << S << endl;
	return(0);
}
