#include <iostream>
using namespace std;

int N, M, A[100][100], schet = 1, I, J;

int main() {
	cin >> N >> M;
	int i = 0;
	int j = M - 1;
	while (i < N) {
		I = i;
		while (I >= 0 && j >= 0) {
			A[I][j] = schet;
			I--;
			j--;
			schet++;
		}
		i++;
		j = M - 1;
	}
	while (j >= 0) {
		j--;
		i = N - 1;
		J = j;
		while (J >= 0 && i >= 0) {
			A[i][J] = schet;
			i--;
			J--;
			schet++;
		}
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	//system("pause");
	return 0;
}