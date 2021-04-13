#include <iostream>
using namespace std;

int check[1000001], prime[1000000];

void FillArray() {
	for (int i = 2; i <= 1000; i++) {
		if (check[i] == 0) {
			for (int j = i * i; j < 1000001; j += i)
				check[j] = 1;
		}
	}
	for (int i = 2, j = 0; i < 1000001; i++) {
		if (check[i] == 0) {
			prime[j] = i;
			j++;
		}
	}
	return;
}

long long Euler(long long N) {

	long long ans = N;

	FillArray();
	for (int i = 0; prime[i] != 0; i++) {
		if (N % prime[i] == 0) {
			ans *= (prime[i] - 1);
			ans /= prime[i];
			while (N % prime[i] == 0)
				N /= prime[i];
		}
	}
	if (N > 1) {
		ans /= N;
		ans *= (N - 1);
	}
	return ans;
}

int main() {

	long long N;

	cin >> N;
	cout << Euler(N) << endl;
	return 0;
}