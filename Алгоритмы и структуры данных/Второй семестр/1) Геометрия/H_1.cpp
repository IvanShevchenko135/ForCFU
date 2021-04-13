#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {

	int x, y, x1, y1, x2, y2;
	int ax, bx, cx, dx, ay, by, cy, dy;
	double cos1, cos2, dis;

	cin >> x >> y >> x1 >> y1 >> x2 >> y2;
	ax = x2 - x1;
	ay = y2 - y1;
	bx = x1 - x2;
	by = y1 - y2;
	cx = x - x1;
	cy = y - y1;
	dx = x - x2;
	dy = y - y2;

	cos1 = ax * dx + ay * dy;
	cos1 /= sqrt(ax * ax + ay * ay);
	cos1 /= sqrt(dx * dx + dy * dy);

	cos2 = bx * cx + by * cy;
	cos2 /= sqrt(bx * bx + by * by);
	cos2 /= sqrt(cx * cx + cy * cy);

	if (cos1 <= 0 && cos2 <= 0) {
		dis = abs((x1 * y2 + x2 * y + x * y1) - (y1 * x2 + y2 * x + y * x1));
		dis /= sqrt(ax * ax + ay * ay);
	}
	else {
		dis = min(sqrt(dx * dx + dy * dy), sqrt(cx * cx + cy * cy));
	}
	cout << fixed << setprecision(4) << dis << endl;
	//system("pause");
	return 0;
}