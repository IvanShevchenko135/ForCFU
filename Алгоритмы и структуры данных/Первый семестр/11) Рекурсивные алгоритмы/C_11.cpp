#include <iostream>
using namespace std;

long long memorize[45][45];

long long BC(int m, int n) {

	if (m == 0 || m == n)
		return 1;
	if (memorize[m][n] == 0)
		memorize[m][n] = BC(m - 1, n - 1) + BC(m, n - 1);
	return memorize[m][n];
}

int main() {

	int m, n;

	cin >> n >> m;
	cout << BC(m, n) << endl;
	return 0;
}