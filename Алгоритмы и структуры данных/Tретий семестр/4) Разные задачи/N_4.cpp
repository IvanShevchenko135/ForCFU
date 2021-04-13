#include <iostream>
using namespace std;

int main() {

	int t, number;

	cin >> t;
	while (t--) {
		cin >> number;
		int ans = 0;
		while (number > 0) {
			int n = number;
			int sum = 0;
			while (n > 0) {
				sum += n % 10;
				n /= 10;
			}
			number -= sum;
			ans++;
		}
		cout << ans << endl;
	}
	return 0;
}