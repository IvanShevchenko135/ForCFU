#include <iostream>
using namespace std;

int main() {

	int T, N[1000], n;

	cin >> T;
	while (T--) {
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> N[i];
		for (int i = n - 1; i > 0; i--)
			cout << N[i] << " ";
		cout << N[0] << endl;
	}
	return 0;
}