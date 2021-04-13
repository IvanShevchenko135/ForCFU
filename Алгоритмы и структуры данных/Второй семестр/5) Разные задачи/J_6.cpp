#include <iostream>
using namespace std;

int main() {

	int a, b, c, dif, sum;

	cin >> a >> b >> c;
	sum = c / a;
	sum *= b;
	dif = b - a;
	while (sum > c) sum -= dif;
	cout << sum << endl;
	//system("pause");
	return 0;
}