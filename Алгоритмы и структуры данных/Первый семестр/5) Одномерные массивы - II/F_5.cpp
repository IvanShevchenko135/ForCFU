#include <iostream>
using namespace std;

long long A[100];
int N, K, i, j;

int main() {
	cin >> N >> K;
	for (i = 0; i < N; i++)
		cin >> A[i];
	for (i = 0; i < K; i++) {
		for (j = 0; j < N - 1; j++) {
			if (A[j] > A[j + 1])
				swap(A[j], A[j + 1]);
		}
	}
	for (i = 0; i < N; i++)
		cout << A[i] << " ";
	//system("pause");
	return 0;
}