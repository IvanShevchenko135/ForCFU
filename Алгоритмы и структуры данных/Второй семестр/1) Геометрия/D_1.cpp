#include <iostream>
#include <cmath>
using namespace std;

int length(int x1, int x2, int y1, int y2) {

	int l;

	l = (x2 - x1) * (x2 - x1) + (y1 - y2) * (y1 - y2);
	return l;
}

int main() {

	int points[4][2], a, b, c, d, d1, d2;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> points[i][j];
		}
	}

	a = length(points[0][0], points[1][0], points[0][1], points[1][1]);
	b = length(points[1][0], points[2][0], points[1][1], points[2][1]);
	c = length(points[2][0], points[3][0], points[2][1], points[3][1]);
	d = length(points[3][0], points[0][0], points[3][1], points[0][1]);
	d1 = length(points[1][0], points[3][0], points[1][1], points[3][1]);
	d2 = length(points[2][0], points[0][0], points[2][1], points[0][1]);

	if (a == b && b == c && c == d) {
		if (d1 == d2) {
			cout << 4 << endl;
			return 0;
		}
		else {
			cout << 2 << endl;
			return 0;
		}
	}
	else if (a == c && b == d && d1 == d2) {
		cout << 2 << endl;
		return 0;
	}
	else if ((a == c || b == d) && d1 == d2) {
		cout << 1 << endl;
		return 0;
	}
	else if (a == b && c == d || a == d && b == c) {
		cout << 1 << endl;
		return 0;
	}
	else {
		cout << 0 << endl;
		return 0;
	}
}