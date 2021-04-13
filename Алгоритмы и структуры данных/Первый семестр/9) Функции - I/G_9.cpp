#include <iostream>
#include <iomanip>
using namespace std;

long double Factorial(int n) {

	long double ans = 1, factor;
	for (int i = 3; i < n; i += 2) {
		factor = (n - i) / (long double)(n - (i - 1));
		ans *= factor;
	}
	return ans;
}

int main() {

	int n;

	cin >> n;
	cout << fixed << setprecision(4) << Factorial(n) << endl;
	//system("pause");
	return 0;
}