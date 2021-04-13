#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int T, N[1001], n;

	cin >> T;
	while (T--) {
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> N[i];
		sort(N, N + n);
		for (int i = 0; i < n - 1; i++)
			cout << N[i] << " ";
		cout << N[n - 1] << endl;
	}
	//system("pause");
	return 0;
}