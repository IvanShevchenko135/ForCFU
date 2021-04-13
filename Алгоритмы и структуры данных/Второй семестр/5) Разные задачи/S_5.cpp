#include <iostream>
using namespace std;

int main() {

	int a[32], n;

	cin >> n;
	a[0] = 0; a[1] = 1;
	cout << 1 << endl;
	for (int i = 2; i < n + 1; i++) {
		a[i] = a[i - 1] + a[i - 2];
		cout << a[i] << endl;
	}
	return 0;
}