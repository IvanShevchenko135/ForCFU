#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
	if (n == 1) 
		return 1;
	return n * factorial(n - 1);
}

int main() {

	int T, N;

	cin >> T;
	while (T--) {
		cin >> N;
		cout << factorial(N) << endl;
	}
	//system("pause");
	return 0;
}