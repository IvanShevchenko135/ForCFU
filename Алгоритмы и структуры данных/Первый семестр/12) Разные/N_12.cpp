#include <iostream>
#include <cmath>
using namespace std;

int T, A, N, sum;

int main() {
	cin >> T;
	while (T--) {
		cin >> A >> N;
		sum = 1;
		for (int i = 1; i <= N; i++) {
			if (i % 2 == 0)
				sum = sum + A * i;
			else
				sum = sum - A * i;
		}
		cout << sum << endl;
	}
	//system("pause");
	return 0;
}