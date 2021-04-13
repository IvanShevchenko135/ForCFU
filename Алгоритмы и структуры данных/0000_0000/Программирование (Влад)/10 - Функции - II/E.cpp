#define _USE_MATH_DEFINES
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <fstream>

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

void SumLong(int *A, int *B, int *C) {
	C[0] = max(A[0], B[0]) + 1; 
	for (int i = 1; i <= C[0]; i++) {
		C[i] += A[i] + B[i];
		C[i + 1] = C[i] / 10000;
		C[i] %= 10000;
	}
	if (C[C[0]] == 0) C[0]--;
}

int main() {
	//ifstream in("INPUT.TXT"); ofstream out("OUTPUT.TXT");
	char s[1100]; int A[1100] = {}, B[1100] = {}, C[1100] = {};
	cin >> s; ReadLong(s, A);
	cin >> s; ReadLong(s, B);
	SumLong(A, B, C);
	for (int i = C[0]; i > 0; i--) printf("%04d", C[i]);
	//system("pause");
	return 0;
}