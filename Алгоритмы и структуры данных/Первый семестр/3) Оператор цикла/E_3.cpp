#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int i;
	unsigned long long A, N, M, ost, ost_A_N;

	cin >> A >> N >> M;
	ost = 1 % M;
	ost_A_N = 1;
	for (i = 1; i <= N; i++) {
		ost_A_N = (ost_A_N * (A % M)) % M;
		ost = (ost + ost_A_N) % M;
	}
	cout << ost << endl;
	return 0;
}
