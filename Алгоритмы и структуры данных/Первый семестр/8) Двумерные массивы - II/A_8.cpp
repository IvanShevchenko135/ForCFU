#include <iostream>
using namespace std;

int N, M, A[100][100], i = 0, j = 0, schet = 1, I, J;

 int main() {
	cin >> N >> M;
	while (i < N) {
		I = i;
		while (I >= 0 && j < M) {
			A[I][j] = schet;
			I--;
			j++;
			schet++;
		}
		i++;
		j = 0;
	}
	while (j < M) {
		j++;
		i = N - 1;
		J = j;
		while (J < M && i >= 0) {
			A[i][J] = schet;
			i--;
			J++;
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