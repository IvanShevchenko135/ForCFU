#include <iostream>
using namespace std;

int main() {

	int n, worms[100];

	cin >> n;
	for (int i = 0; i < n; i++) cin >> worms[i];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (worms[i] == (worms[j] + worms[k]) && i != j && j != k) {
					cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;
					//system("pause");
					return 0;
				}
			}
		}
	}
	cout << -1 << endl;
	//system("pause");
	return 0;
}