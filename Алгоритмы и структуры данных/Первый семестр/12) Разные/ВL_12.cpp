#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string.h>
using namespace std;

int A[1001], B[1001], C[1001];

void ReadLong(char *s, int *A) {
	for (int i = strlen(s) - 1, j = 1; i >= 0; i--, j++) {
		A[j] = (int)(s[i] - '0');
	}
	A[0] = strlen(s);
	return;
}

void SumLong(int *A, int *B, int *C) {

	int size = max(A[0], B[0]);

	for (int i = 1; i <= size; i++) {
		C[i + 1] = (A[i] + B[i] + C[i]) / 10;
		C[i] = (A[i] + B[i] + C[i]) % 10;
	}
	if (C[size + 1] == 0)
		C[0] = size;
	else
		C[0] = size + 1;
}

int main() {

	char a[1001], b[1001];

	cin >> a;
	cin >> b;
	ReadLong(a, A);
	ReadLong(b, B);
	SumLong(A, B, C);
	for (int i = C[0]; i > 0; i--) {
			cout << C[i];
	}
	cout << endl;
	//system("pause");
	return 0;
}