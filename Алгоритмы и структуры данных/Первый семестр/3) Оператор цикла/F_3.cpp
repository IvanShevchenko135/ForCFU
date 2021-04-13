#include <iostream>

using namespace std;

int main() {

	int N, i;
	unsigned long long A[76];
	
	A[0] = 0;
	A[1] = 0;
	A[2] = 1;
	for (i = 3; i <= 76; i++)
		A[i] = A[i - 1] + A[i - 2] + A[i - 3];
	cin >> N;
	cout << A[N] << endl;
	return 0;
}