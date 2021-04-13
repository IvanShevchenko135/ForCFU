#include <iostream>
using namespace std;

int main() {
	
	int t, n;
	int a[101];

	cin >> t;
	while (t--) {
		cin >> n;
		int maxv = -101, ans = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] > maxv) {
				maxv = a[i];
				ans = 1;
			}
			else if (a[i] == maxv) ans++;
		}
		cout << ans << endl;
	}
	return 0;
}