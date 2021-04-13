#include <iostream>
#include <algorithm>

using namespace std;

int N[101], A[101];
int i, n, k, x;

int main() {
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> N[i];
	A[0] = 1;
	for (i = 0; i < n; i++)
		A[i] = A[i - 1] + 1;
	for (i = 0; i < n; i++) {
		x = 0;
		for (k = 0; k < n; k++) {
			if (N[i] == A[k]) {
				x = 1;
				A[k] = 0;
				break;
			}
		}
		if (x == 0) {
			cout << "NO" << endl;
			cout << N[i] << endl;
			//system("pause");
			return 0;
		}

	}
	cout << "YES" << endl;
	//system("pause");
	return 0;
}