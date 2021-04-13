#include <iostream>
using namespace std;

int n;

void shift(int *N, int pos, char *dir) {
	if (dir[0] == 'r') {
		for (int i = pos; i > 0; i--) {
			int x = N[n - 1];
			for (int j = n - 1; j >= 0; j--)
				N[j] = N[j - 1];
			N[0] = x;
		}
	}
	else {
		for (int i = pos; i > 0; i--) {
			int x = N[0];
			for (int j = 0; j < n - 1; j++)
				N[j] = N[j + 1];
			N[n - 1] = x;
		}
	}
	return;
}

int main() {

	int N[101], K;
	char dir[6];

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> N[i];
	cin >> K >> dir;
	shift(N, K, dir);
	for (int i = 0; i < n; i++)
		cout << N[i] << " ";
	cout << endl;
	//system("pause");
	return 0;
}