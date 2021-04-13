#include <iostream>
using namespace std;

int M, N, A[1000][1000], MIN = 2147483647;

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> A[i][j];
			if (A[i][j] < MIN)
				MIN = A[i][j];
		} 
		cout << MIN << endl;
		MIN = 2147483647;
	}
	//system("pause");
	return 0;
}