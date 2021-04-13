#include <iostream>
using namespace std;

int M, N, A[101][101], max_i;
long long sum = 0, max_sum = 0;

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			sum += A[j][i];
		}
		if (sum > max_sum || i == 0) {
			max_sum = sum;
			max_i = i;
		}
		sum = 0;
	}
	cout << max_i << " " << max_sum << endl;
	//system("pause");
	return 0;
}