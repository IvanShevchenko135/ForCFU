#define _USE_MATH_DEFINES
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

void ReadLong(char *s, int *A) {
	int cnt = 0, n = strlen(s);
	A[0] = (n % 4 == 0 ? n / 4 : n / 4 + 1);
	for (int i = n - 4; i >= 0; i -= 4) {
		cnt++;
		for (int j = 0; j < 4; j++) {
			A[cnt] = A[cnt] * 10 + (s[i + j] - '0');
		}
	}
	if (cnt < A[0]) {
		for (int i = 0; i < n % 4; i++) A[cnt + 1] = A[cnt + 1] * 10 + (s[i] - '0');
	}
}

int main() {
	char s[1100]; int A[1100] = {};
	cin >> s;
	ReadLong(s, A);
	for (int i = 0; i <= A[0]; i++) printf("%d\n", A[i]);
	//system("pause");
	return 0;
}