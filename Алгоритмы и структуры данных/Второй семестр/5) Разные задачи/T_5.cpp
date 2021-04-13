#include <iostream>
using namespace std;

int main() {

	int n, div5, mod5, sum;

	cin >> n;
	mod5 = n / 5;
	div5 = n % 5;
	sum = mod5;
	sum += div5 / 2;
	if (div5 % 2 == 1) sum += 2;
	cout << sum << endl;
	//system("pause");
	return 0;
}