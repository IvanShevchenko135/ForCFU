#include <iostream>
using namespace std;

long long Fib_num[45];

char Fib_str(int n, long long k) {
	
	if (n == 0) 
		return 'a';
	if (n == 1)
		return 'b';
	if (k <= Fib_num[n - 2])
		return Fib_str(n - 2, k);
	else
		return Fib_str(n - 1, k - Fib_num[n - 2]);
}

int main() {

	long long t, n, k;

	Fib_num[0] = 1;
	Fib_num[1] = 1;
	for (int i = 2; i < 45; i++)
		Fib_num[i] = Fib_num[i - 1] + Fib_num[i - 2];
	cin >> t;
	while (t--) {
		cin >> n >> k;
		cout << Fib_str(n, k) << endl;
	}
	//system("pause");
	return 0;
}