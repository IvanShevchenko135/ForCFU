#include <iostream>
using namespace std;

int M, N, A[100][100], B[100], b[100];

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> A[i][j];
		}
	}
	for (int k = 0; k < M - 1 ; k++) {
		for (int j = 0; j < M - 1; j++) {
			if (A[N - 1][j] > A[N - 1][j + 1]) {
				for (int i = 0; i < N; i++) {
					B[i] = A[i][j];
					b[i] = A[i][j + 1];
				}
				for (int i = 0; i < N; i++) {
					A[i][j] = b[i];
					A[i][j + 1] = B[i];
				}
			}
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	//system("pause");
	return 0;
}