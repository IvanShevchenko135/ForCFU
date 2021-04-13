#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

	int points[50000][2], n;
	double s = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> points[i][j];
		}
	}
	for (int i = 0; i < n - 1; i++) {
		s += points[i][0] * points[i + 1][1];
	}
	for (int i = 0; i < n - 1; i++) {
		s -= points[i + 1][0] * points[i][1];
	}
	s += points[n - 1][0] * points[0][1];
	s -= points[0][0] * points[n - 1][1];
	s = abs(s) / 2;
	cout << fixed << setprecision(1) << s << endl;
	//system("pause");
	return 0;
}