#include <iostream>
using namespace std;

int a, b, T;

int main() {
	cin >> T;
	for (T; T > 0; T--) {
		cin >> a >> b;
		cout << b << " " << a << endl;
	}
}