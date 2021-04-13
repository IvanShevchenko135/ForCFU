#include <iostream>
using namespace std;

long long T, a, first, last;

int main() {
	cin >> T;
	for (T; T > 0; T--) {
		cin >> a;
		last = a % 10;
		first = a / 100;
		if (last == first)
			cout << "=" << endl;
		else if (last > first) 
			cout << last << endl;
		else
			cout << first << endl;
	}
	return 0;
}