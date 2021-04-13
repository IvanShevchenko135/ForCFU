#include <iostream>
using namespace std;

int M, N, sum = 0;
char B[101][101];

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++)
		cin >> B[i];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (B[i][j] == '.' && B[i + 1][j] == '.') {
				if (B[i + 1][j + 1] == '.')
					sum++;
				if (B[i + 1][j - 1] == '.')
					sum++;
				if (B[i][j + 1] == '.')
					sum++;
				if (B[i][j - 1] == '.')
					sum++;
			}
		}
	}
	cout << sum << endl;
	//system("pause");
	return 0;
}