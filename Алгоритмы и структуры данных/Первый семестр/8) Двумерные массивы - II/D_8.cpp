#include <iostream>
using namespace std;

int M, N, A[100][100], MIN, sum = 0;
char B[100][100];

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> A[i][j];
			if (i == 0 && j == 0)
				MIN = A[i][j];
			if (A[i][j] < MIN)
				MIN = A[i][j];
		}
	}
	for (int i = 0; i < N; i++)
		cin >> B[i];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (A[i][j] == MIN && B[i][j] == '0')
				sum++;
		}
	}
	cout << sum << endl;
	//system("pause");
	return 0;
}