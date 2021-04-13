#include <iostream>
using namespace std;

int main() {
	
	int bills[6] = { 10, 20, 50, 100, 200, 500 };
	int t, n;
	
	cin >> t;
	while (t--) {
		cin >> n;
		int cnt = 0;
		for (int i = 5; i > -1 && n > 0; i--) {
			while (n >= bills[i]) {
				n -= bills[i];
				cnt++;
			}
		}
		if (n == 0) cout << cnt << endl;
		else cout << -1 << endl;
	}
	return 0;
}