#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>

#define big 1000000000

using namespace std;

long long Combin(int N, int M) {
	long long res = 1;
	int cnt = min(M, N - M);
	for (int i = 1; i <= cnt; i++, N--) {
		res *= N;
		res /= i;
	}
	if (res < 0 || res > big) return -1;
	return res;
}

int main() {
	int t, n, m;
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &n, &m);
		long long ans = Combin(n, m);
		ans == -1 ? printf("Too big!\n") : printf("%lld\n", ans);
	}
	//system("pause");
	return 0;
}