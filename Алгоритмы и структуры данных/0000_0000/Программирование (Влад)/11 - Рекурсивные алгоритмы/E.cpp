#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

long long fib[50];

char strfib(int n, int k) {
	if (n == 0) return 'a';
	if (n == 1) return 'b';
	if (fib[n - 2] < k) return strfib(n - 1, k - fib[n - 2]);
	return strfib(n - 2, k);
}
int main() {
	fib[0] = 1; fib[1] = 1;
	for (int i = 2; i <= 46; i++) fib[i] = fib[i - 1] + fib[i - 2];
	int t, n, k; 
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &n, &k);
		printf("%c\n", strfib(n, k));
	}
	//system("pause");
	return 0;
}