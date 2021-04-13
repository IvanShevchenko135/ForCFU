#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {

	int p, s, b, w, l;
	double d;

	cin >> p >> b;
	s = p + b;
	p /= 2;
	p += 2;
	d = sqrt(p * p - 4 * s);
	w = (d + p) / 2;
	l = p - w;
	cout << max(w, l) << " " << min(w, l) << endl;
	return 0;
}