#include <iostream>
using namespace std;

int w, h, sum = 0;
char A[101][101];

int main() {
	cin >> w >> h;
	for (int i = 0; i < h; i++)
		cin >> A[i];
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if ((A[i][j] == 'A' && A[i + 1][j] == 'B') || (A[i][j] == 'B' && A[i + 1][j] == 'A'))
				sum++;
			if ((A[i][j] == 'A' && A[i][j + 1] == 'B') || (A[i][j] == 'B' && A[i][j + 1] == 'A'))
				sum++;
		}
	}
	cout << sum << endl;
	//system("pause");
	return 0;
}