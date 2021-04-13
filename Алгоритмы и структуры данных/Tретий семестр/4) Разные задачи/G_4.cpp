#include <iostream>
using namespace std;

int main() {
	
	int t, n, a[101];

	cin >> t;
	while (t--) {
		cin >> n;
		int max_v = -101;
		int min_v = 101;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] > max_v) max_v = a[i];
			if (a[i] < min_v) min_v = a[i];
		}
		for (int i = 0; i < n; i++) {
			if (a[i] == max_v) cout << min_v << " ";
			else if (a[i] == min_v) cout << max_v << " ";
			else cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}