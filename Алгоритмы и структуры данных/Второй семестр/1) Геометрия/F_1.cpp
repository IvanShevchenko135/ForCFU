#include <iostream>
using namespace std;

int p[100000][2], n;

bool dir(int a, int b , int c, bool &S){
	
	int s = (p[a][0] * p[b][1] + p[b][0] * p[c][1] + p[c][0] * p[a][1]) - (p[a][1] * p[b][0] + p[b][1] * p[c][0] + p[c][1] * p[a][0]);
	if (s == 0) S = 0;
	else S = 1;
	if (s < 0) return 1;
	else return 0;
}

int main() {

	bool s, clockwise, convex = 1;

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> p[i][0] >> p[i][1];
	clockwise = dir(0, 1, 2, s);

	for (int i = 1; i < n - 2; i++) {
		bool tmp = dir(i, i + 1, i + 2, s);
		if (tmp != clockwise && s != 0) {
			convex = 0;
			break;
		}
	}

	if (convex) {
		bool tmp = dir(n - 2, n - 1, 0, s);
		if (tmp != clockwise && s != 0) {
			convex = 0;
		}
		tmp = dir(n - 1, 0, 1, s);
		if (tmp != clockwise && s != 0) {
			convex = 0;
		}
	}
	if (convex) cout << "YES" << endl;
	else cout << "NO" << endl;
	//system("pause");
	return 0;
}