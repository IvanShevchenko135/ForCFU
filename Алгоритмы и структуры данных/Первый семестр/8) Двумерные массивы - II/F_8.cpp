#include <iostream>
using namespace std;

int M, N, A[101][101], B[10001];

int main() {
	cin >> M >> N;
	for (int i = 0; i < N * M; i++) {
		cin >> B[i];
	}

	int k = 0;
	for (int j = M - 1; j >= 0; j--) {
		for (int i = 0; i < N; i++) {
			A[i][j] = B[k];
			k++;
		}
	}

	cout << N << " " << M << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	//system("pause");
	return 0;
}