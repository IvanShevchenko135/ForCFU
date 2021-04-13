#include <iostream>
using namespace std;

long long T, a, k, ans;

int main() {
	cin >> T;
	for (T; T > 0; T--) {
		cin >> a >> k;
		ans = 1;
		for (k; k > 0; k--)
			ans *= a;
		cout << ans << endl;
	}
	return 0;
}