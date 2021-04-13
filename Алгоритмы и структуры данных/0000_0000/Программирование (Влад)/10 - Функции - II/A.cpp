#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

int resh[1000001];
vector<int> prime;

bool isPrime(long long N) {
	for (int i = 0; i < prime.size() && prime[i] != N; i++) {
		if (N % prime[i] == 0) return false;
	}
	return true;
}

int main() {
	long long n;
	int t; scanf("%d", &t);
	for (int i = 2; i <= 1000; i++) {
		if (resh[i] == 0) {
			for (int j = 2 * i; j <= 1000000; j += i) resh[j] = 1;
		}
	}
	for (int i = 2; i < 1000000; i++) {
		if (resh[i] == 0) prime.push_back(i);
	}
	while (t--) {
		scanf("%lld", &n);
		if (isPrime(n)) printf("YES\n");
		else printf("NO\n");
	}
	//system("pause");
	return 0;
}