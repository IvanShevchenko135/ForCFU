#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T, K, N, worker, number;
	cin >> T;
	while (T--) {
		cin >> K >> N;
		worker = ceil(N / (double)K);
		while (N > K)
			N -= K;
		number = N;
		cout << worker << " " << number;
		cout << endl;
	}
	//system("pause");
	return 0;
}