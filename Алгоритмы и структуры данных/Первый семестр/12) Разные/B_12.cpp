#include <iostream>
using namespace std;

long long A, B;

int main() {
	cin >> A;
	while (cin >> B)
		A += B;
	cout << A;
	return 0;
}