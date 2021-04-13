#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int n, a[100], minv;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	minv = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] > minv) {
			cout << a[i] << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}