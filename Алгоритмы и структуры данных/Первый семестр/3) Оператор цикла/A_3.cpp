#include <iostream>

using namespace std;

int main() {

	int sum = 0;
	unsigned long long N, n;

	cin >> N;
	n = N;
	while (n > 0)
	{
		sum = sum + (n % 10);
		n = n / 10;
	}
	if ((N % sum) == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}