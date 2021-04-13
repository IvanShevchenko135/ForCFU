#include <iostream>
using namespace std;

int main() {

	int si, sj;
	int ri, rj;
	int k, exmp[4][4] = { 1, 3, 14, 16,
						  5, 12, 7, 10,
						  13, 11, 4, 6,
						  15, 8, 9, 2 };

	cin >> si >> sj >> k;
	si--; sj--;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (exmp[i][j] == k) {
				ri = i;
				rj = j;
			}
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (i == ri && j == rj) {
				cout << exmp[si][sj] << " ";
			}
			else if (i == si && j == sj) {
				cout << exmp[ri][rj] << " ";
			}
			else if (i == ri && j == sj) {
				cout << exmp[si][rj] << " ";
			}
			else if (i == si && j == rj) {
				cout << exmp[ri][sj] << " ";
			}
			else if (i == si) {
				cout << exmp[ri][j] << " ";
			}
			else if (j == sj) {
				cout << exmp[i][rj] << " ";
			}
			else if (i == ri) {
				cout << exmp[si][j] << " ";
			}
			else if (j == rj) {
				cout << exmp[i][sj] << " ";
			}
			else {
				cout << exmp[i][j] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}