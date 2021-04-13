#include <iostream>
#include <fstream>
using namespace std;

int c[1001];

int main() {

	int n, number, maxv = -1;

	freopen("numb.dat", "r", stdin);
	freopen("numb.sol", "w", stdout);

	cin >> n;
	while (n--) {
		cin >> number;
		c[number]++;
	}
	for (int i = 1; i < 1001; i++) {
		if (maxv < c[i]) {
			maxv = c[i];
			number = i;
		}
	}
	cout << number << endl;
	return 0;
}