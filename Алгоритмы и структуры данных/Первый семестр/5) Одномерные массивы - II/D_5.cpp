#include <iostream>
using namespace std;

long long A[100000], B[100000], C[200000];
int N, M, K, i, k, j;

int main() {
	cin >> N;
	for (i = 0; i < N; i++)
		cin >> A[i];
	cin >> M;
	for (i = 0; i < M; i++)
		cin >> B[i];
	K = M + N;
	k = 0;
	j = 0;
	for (i = 0; i < K; i++) {
		if ((A[k] < B[j] && k < N) || (j >= M)) {
			C[i] = A[k];
			k++;
		}
		else {
			C[i] = B[j];
			j++;
		}
	}
	for (i = 0; i < K; i++)
		cout << C[i] << " ";
	//system("pause");
	return 0;
}