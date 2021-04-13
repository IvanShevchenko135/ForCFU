#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

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

int main() {

	char s[1000];
	int A[1000];

	cin >> s;
	ReadLong(s, A);
	cout << A[0] << endl;
	for (int i = 1; i < A[0] + 1; i++)
		cout << A[i] << endl;
	//system("pause");
	return 0;
}