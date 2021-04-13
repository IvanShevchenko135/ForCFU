#include <iostream>
using namespace std;

int M, N, A[1000][1000], B[1000][1000], C[1001];

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> A[i][j];
			C[A[i][j]]++;
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			B[i][j] = C[A[i][j]];
			cout << B[i][j] << " ";
		}
		cout << endl;
	}
	//system("pause");
	return 0;
}