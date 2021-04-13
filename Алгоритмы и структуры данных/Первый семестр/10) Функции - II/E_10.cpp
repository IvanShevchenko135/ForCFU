#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int A[1000], B[1000], C[1000];

void ReadLong(char *s, int *A) {

	int j = 1, value = 0, I = 0;

	for (int i = strlen(s) - 4; i > -4; i -= 4) {
		if (i < 0) {
			I = i;
			i = max(i, 0);
		}
		for (int c = 0; c < 4 + I; c++) {
			value = value * 10 + (int)(s[i + c] - '0');
		}
		A[j] = value;
		j++;
		value = 0;
	}
	A[0] = j - 1;
	return;
}

void SumLong(int *A, int *B, int *C) {

	int size = max(A[0], B[0]);

	for (int i = 1; i <= size; i++) {
		C[i + 1] = (A[i] + B[i] + C[i]) / 10000;
		C[i] = (A[i] + B[i] + C[i]) % 10000;
	}
	if (C[size + 1] == 0)
		C[0] = size;
	else
		C[0] = size + 1;
}

int main() {

	char a[1000], b[1000];

	cin >> a;
	cin >> b;
	ReadLong(a, A);
	ReadLong(b, B);
	SumLong(A, B, C);
	cout << C[C[0]];
	for (int i = C[0] - 1; i > 0; i--)
		printf ("%04d", C[i]);
	//system("pause");
	return 0;
}