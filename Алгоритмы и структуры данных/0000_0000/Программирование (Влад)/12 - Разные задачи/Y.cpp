#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

const int osn = 10000;
int a[4000], b[4000], n, t;

int main() {
	scanf("%d", &t);
	while (t--)
	{
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		scanf("%d", &n);
		a[0] = 1; a[1] = 1;
		int t = 1;
		int l = a[0];
		while (t <= n) {
			memset(b, 0, sizeof(b));
			for (int i = 1; i <= l; i++)
			{
				b[i + 1] = (a[i] * t + b[i]) / osn;
				b[i] = (a[i] * t + b[i]) % osn;
				b[0] = l;
				if (b[l + 1] != 0) l++;
			}
			for (int i = 0; i <= l; i++) a[i] = b[i];
			t++;
		}
		printf("%d", a[a[0]]);
		for (int i = a[0] - 1; i > 0; i--) printf("%04d", a[i]);
		printf("\n");
	}
	return 0;
}