#include <iostream>
using namespace std;

int main() {

	int p[2][2];
	int d[3] = { 1, -1, 0 };
	bool check = false;

	cin >> p[0][0] >> p[0][1] >> p[1][0] >> p[1][1];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int x = p[0][0] + d[i];
			int y = p[0][1] + d[j];
			int s = (p[0][0] * p[1][1] + p[1][0] * y + x * p[0][1])
				- (p[0][1] * p[1][0] + p[1][1] * x + y * p[0][0]);
			if (s > 0 && x >= 0 && x <= 10000 && y >= 0 && y <= 10000) {
				cout << x << " " << y << " ";
				check = true;
				break;
			}
		}
		if (check) break;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int x = p[0][0] + d[i];
			int y = p[0][1] + d[j];
			int s = (p[0][0] * p[1][1] + p[1][0] * y + x * p[0][1])
				- (p[0][1] * p[1][0] + p[1][1] * x + y * p[0][0]);
			if (s < 0 && x >= 0 && x <= 10000 && y >= 0 && y <= 10000) {
				cout << x << " " << y << endl;
				return 0;;
			}
		}
	}
}