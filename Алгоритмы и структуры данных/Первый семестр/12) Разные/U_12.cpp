#include <iostream>
using namespace std;

void shift(int n, int pos, int *N) {

	for (int i = pos; i > 0; i--) {
		int x = N[n - 1];
		for (int j = n - 1; j >= 0; j--)
			N[j] = N[j - 1];
		N[0] = x;
	}
	return;
}

int main() {

	int T, N[1001], k, n;

	cin >> T;
	while (T--) {
		cin >> n >> k;
		for (int i = 0; i < n; i++)
			cin >> N[i];
		shift(n, k, N);
		for (int i = 0; i < n - 1; i++)
			cout << N[i] << " ";
		cout << N[n - 1] << endl;
	}
	//system("pause");
	return 0;
}