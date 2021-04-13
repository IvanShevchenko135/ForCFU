#include <iostream>
using namespace std;

int p[1001][2], n, pos = 1;;

bool dir(int a, int b, bool &border) {
	int s = (p[a][0] * p[b][1] + p[b][0] * p[n][1] + p[n][0] * p[a][1]) - (p[a][1] * p[b][0] + p[b][1] * p[n][0] + p[n][1] * p[a][0]);
	int da, db, d;
	d = (p[b][0] - p[a][0]) * (p[b][0] - p[a][0]) + (p[b][1] - p[a][1]) * (p[b][1] - p[a][1]);
	da = (p[n][0] - p[a][0]) * (p[n][0] - p[a][0]) + (p[n][1] - p[a][1]) * (p[n][1] - p[a][1]);
	db = (p[n][0] - p[b][0]) * (p[n][0] - p[b][0]) + (p[n][1] - p[b][1]) * (p[n][1] - p[b][1]);
	if (s == 0 && da <= d && db <= d) border = 1;
	else border = 0;
	if (s > 0) return 1;
	else return 0;
}

int main() {

	bool border;

	cin >> n;
	for (int i = 0; i < n + 1; i++) {
		cin >> p[i][0] >> p[i][1];
	}

	for (int i = 0; i < n - 1; i++) {
		if (!dir(i, i + 1, border)) {
			if (border) pos = 2;
			else pos = 3;
			break;
		}
	}
	if (pos == 1) {
		if (!dir(n - 1, 0, border)) {
			if (border) pos = 2;
			else pos = 3;
		}
	}

	if (pos == 1) cout << "INSIDE" << endl;
	else if (pos == 2) cout << "ON BORDER" << endl;
	else cout << "OUTSIDE" << endl;
	//system("pause");
	return 0;
}