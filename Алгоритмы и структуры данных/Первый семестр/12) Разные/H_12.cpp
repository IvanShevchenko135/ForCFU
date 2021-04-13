#include <iostream>
using namespace std;

int T, N, A, sum, amount;

int main() {
	cin >> T;
	for (T; T > 0; T--) {
		cin >> N;
		sum = 0;
		amount = 0;
		for (int i = 0; i < N; i++) {
			cin >> A;
			if (A > 0 && A % 6 == 0) {
				sum += A;
				amount++;
			}
		}
		cout << amount << " " << sum << endl;
	}
	//system("pause");
	return 0;
}