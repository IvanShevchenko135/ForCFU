#include <iostream>
#include <string>
using namespace std;

string a, b, ab;
int m[2000002];

int main() {
	cin >> a;
	cin >> b;
	ab = b + '#' + a;
	for (int i = 1; i < ab.size(); i++) {
		int j = m[i - 1];
		while (true) {
			if (ab[i] == ab[j]) {
				m[i] = j + 1;
				break;
			}
			if (j == 0) break;
			else  j = m[j - 1];
		}
		if (m[i] == b.size()) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}