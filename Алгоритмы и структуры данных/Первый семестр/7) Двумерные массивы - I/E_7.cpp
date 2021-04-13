#include <iostream>
using namespace std;

int M, N, A[100][100], B[100], b[100];
int  MAX = -1, MIN = 2147483647, MAX_J, MIN_J;

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> A[i][j]; 
			if (MAX < A[i][j]) {
				MAX = A[i][j];
				MAX_J = j;
			}
			if (MIN > A[i][j]) {
				MIN = A[i][j];
				MIN_J = j;
			}
		}
	}
	if (MAX_J != MIN_J) {
		for (int i = 0; i < N; i++) {
			B[i] = A[i][MAX_J];
			b[i] = A[i][MIN_J];
		}
		for (int i = 0; i < N; i++) {
			A[i][MAX_J] = b[i];
			A[i][MIN_J] = B[i];
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