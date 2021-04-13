#include <iostream>
using namespace std;

long long A[100];
int N, K, j, i, MIN, t;

int main() {
	cin >> N >> K;
	for (i = 0; i < N; i++)
		cin >> A[i];
	for (i = 0; i < K; i++) {
		for (j = i + 1; j < N; j++) {
			if (A[i] > A[j])
				swap(A[i], A[j]);
		}
	}
	for (i = 0; i < N; i++)
		cout << A[i] << " ";
	//system("pause");
	return 0;
}