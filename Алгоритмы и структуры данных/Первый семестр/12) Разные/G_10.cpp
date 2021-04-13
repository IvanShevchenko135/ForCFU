#include <iostream>
using namespace std;

long long T, a, b, c;

int main() {
	cin >> T;
	for (T; T > 0; T--) {
		cin >> a >> b >> c;
		if (a == b && b == c)
			cout << 1 << endl;
		else if (a != b && b != c && a != c)
			cout << 3 << endl;
		else
			cout << 2 << endl;
	}
	return 0;
}