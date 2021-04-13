#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

int resh[1000001];
vector<int> prime;

long long Euler(long long N) {
	long long ans = N;
	for (int i = 0; i < prime.size() && N > 1; i++) {
		if (N % prime[i] == 0) {
			while (N % prime[i] == 0) N /= prime[i];
			ans -= ans / prime[i];
		}
	}
	if (N > 1) ans -= ans / N;
	return ans;
}

int main() {
	long long n; scanf("%lld", &n);
	for (int i = 2; i <= 1000; i++) {
		if (resh[i] == 0) {
			for (int j = 2 * i; j <= 1000000; j += i) resh[j] = 1;
		}
	}
	for (int i = 2; i < 1000000; i++) {
		if (resh[i] == 0) prime.push_back(i);
	}
	//for (int i = 0; i < prime.size(); i++) cout << prime[i] << endl;
	printf("%lld", Euler(n));
	//system("pause");
	return 0;
}