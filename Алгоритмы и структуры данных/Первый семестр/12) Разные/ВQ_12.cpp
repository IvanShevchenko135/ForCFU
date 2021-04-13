#include <iostream>
using namespace std;

bool check;
int M, N, A[1001][1001], I, J, MAX = -1, i, j;

int main() {
	cin >> N >> M;
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			cin >> A[i][j];
		}
	}
	j = 0;
	while (j < M) {
		check = 1;
		for (i = 0; i < N; i++) {
			if (MAX <= A[i][j]) {
				MAX = A[i][j];
				I = i;
				J = j;
			}
		}
		for (j = 0; j < M; j++) {
			if (A[I][j] < MAX) {
				check = 0;
				break;
			}
		}
		if (check)
			break;
		else {
			j = J + 1;
			MAX = -1;
		}
	}
	if (check) {
		cout << MAX << endl;
		cout << I << " " << J << endl;
	}
	else {
		cout << "0" << endl;
	}
	return 0;
}