#include <iostream>
using namespace std;

int main() {

	int t, n, maxd;

	cin >> t;
	while (t--) {
		cin >> n;
		maxd = 0;
		while (n > 0) {
			int last_d;
			last_d = n % 10;
			if (last_d > maxd) maxd = last_d;
			n /= 10;
		}
		cout << maxd << endl;
	}
	return 0;
}