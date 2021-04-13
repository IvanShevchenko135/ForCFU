#include <iostream>
using namespace std;

long long a[200000];
long long ans;

int main() {

	int n;
	bool chk = true;
	cin >> n;
	cin >> a[1];
	for (int i = 2; i < n + 1; i++) {
		cin >> a[i];
		a[i] += a[i - 1];
	}
	for (int l = 1; l <= n; l++) {
		if (chk == false) break;
		for (int i = 1; i <= n - l + 1; i++) {
			int j = i + l - 1;
			long long sum = a[j] - a[i - 1];
			if (sum != 0) ans++;
			else chk = false;
		}
	}
	cout << ans << endl;
	return 0;
}