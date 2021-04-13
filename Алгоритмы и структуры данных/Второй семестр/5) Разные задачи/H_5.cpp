#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main() {

	long long w[50], sum = 0;
	int n;

	freopen("sum.dat", "r", stdin);
	freopen("sum.sol", "w", stdout);

	cin >> n;
	for (int i = 0; i < n; i++) cin >> w[i];
	sort(w, w + n);
	for (int i = 0; i < n; i++) {
		if (w[i] - sum <= 1) sum += w[i];
		else {
			cout << sum + 1 << endl;
			return 0;
		}
	}
	cout << sum + 1 << endl;
	return 0;
}