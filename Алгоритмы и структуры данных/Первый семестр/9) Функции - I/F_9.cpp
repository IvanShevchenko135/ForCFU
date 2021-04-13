#include <iostream>
using namespace std;

long long PowerMod(long long a, long long n, long long m) {

	long long ans = 1;

	while (n != 0) {
		if (n % 2 != 0) {
			n--;
			ans = (ans % m * a % m) % m;
		}
		else {
			n /= 2;
			a = (a % m * a % m) % m;
		}
	}
	ans = ans % m;
	return ans;
}

int main() {
	
	int a, n, m;

	while (cin >> a >> n >> m)
		cout << PowerMod(a, n, m) << endl;
	//system("pause");
	return 0;
}