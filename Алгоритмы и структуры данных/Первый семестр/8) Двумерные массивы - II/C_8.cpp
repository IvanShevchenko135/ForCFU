#include <iostream>
using namespace std;

int N, M, A[100][100], schet = 1, I, J;

int main() {
	cin >> N >> M;
	int i = 0;
	int j = -1;

	while (schet < M * N + 1) {
		while (true) {
			if (j == M - 1 || A[i][j + 1] != 0)
				break;
			else {
				j++;
				A[i][j] = schet;
				schet++;
			}
		}

		while (true) {
			if (i == N - 1 || A[i + 1][j] != 0)
				break;
			else {
				i++;
				A[i][j] = schet;
				schet++;
			}
		}

		while (true) {
			if (j == 0 || A[i][j - 1] != 0)
				break;
			else {
				j--;
				A[i][j] = schet;
				schet++;
			}
		}

		while (true) {
			if (i == 0 || A[i - 1][j] != 0)
				break;
			else {
				i--;
				A[i][j] = schet;
				schet++;
			}
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