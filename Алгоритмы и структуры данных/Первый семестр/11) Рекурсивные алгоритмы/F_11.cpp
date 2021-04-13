#include <iostream>
#include <string>
using namespace std;

int SuperDigit(long long n) {

	int sum = 0;

	if (n < 10)
		return n;
	while (n > 0) {
		sum += (n % 10);
		n /= 10;
	}
	return SuperDigit(sum);
}

int main() {
	
	string str;
	long long n = 0, k;

	cin >> str >> k;
	while (str.size() > 0) {
		n += (long long)str[0] - '0';
		str.erase(0, 1);
	}
	n = SuperDigit(n);
	n *= k;
	n = SuperDigit(n);
	cout << n << endl;
	//system("pause");
	return 0;
}