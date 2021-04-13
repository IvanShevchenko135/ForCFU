#include <iostream>

using namespace std;

int main() {

	int N, M, K, A;
	long long sum;

	cin >> N >> M >> K;
	sum = 0;
	while (N > 0) {
		cin >> A;
		if ((A % M) == K) {
			cout << A << endl;
			sum = sum + A;
		}
		N = N - 1;
	}
	cout << sum << endl;
	return(0);
}