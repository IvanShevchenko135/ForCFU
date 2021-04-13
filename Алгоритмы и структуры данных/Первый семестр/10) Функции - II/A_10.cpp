#include <iostream>
using namespace std;

int check[1000001], prime[1000000];
bool filled = 0;

void FillArray() {
	if (!filled) {
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
	}
	filled = 1;
	return;
}

bool isPrime(long long N) {
	FillArray();
	for (int i = 0; prime[i] != 0 && prime[i] * prime[i] <= N; i++) {
		if (N % prime[i] == 0 && N != prime[i])
			return 0;
	}
	return 1;
}

int main() {
	
	int T;
	long long N;

	cin >> T;
	while (T--) {
		cin >> N;
		if (isPrime(N))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	//system("pause");
	return 0;
}