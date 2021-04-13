#include <iostream>
using namespace std;

bool NextPermutation(int *p, int n) {

	bool last = 1;
	int I = n - 2;

	for (int i = I; i >= 0; i--) {
		if (p[i] < p[i + 1]) {
			last = 0;
			I = i;
			break;
		}
	}
	if (last)
		return false;
	else {
		for (int j = n - 1; I < j; j--) {
			if (p[j] > p[I]) {
				swap(p[j], p[I]);
				break;
			}
		}
		for (int i = I + 1; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (p[i] > p[j])
					swap(p[i], p[j]);
			}
		}
		return true;
	}
}

int main() {

	int n, p[1001];

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> p[i];
	if (NextPermutation(p, n)) {
		for (int i = 0; i < n; i++)
			cout << p[i] << " ";
	}
	else
		cout << "Not exist" << endl;
	//system("pause");
	return 0;
}