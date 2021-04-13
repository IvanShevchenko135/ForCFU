#include <iostream>
#include <algorithm>
using namespace std;

long long A[100], B[100], C[100];
int N, i, j;

int main() {
	cin >> N;
	for (i = 0; i < N; i++)
		cin >> A[i];
	for (i = 0; i < N; i++)
		B[i] = A[i];
	sort(B, B + N);
	for (i = 0; i < N; i++) { 
		for (j = 0; j < N; j++) {
			if (A[i] == B[j]) {
				C[j] = i;
				B[j] = -1;
				break;
			}
		}
	}
	for (i = 0; i < N; i++)
		cout << C[i] << " ";
	//system("pause");
	return 0;
}