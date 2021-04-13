#include <iostream>
using namespace std;

int M, N, A[100][100];
int  MAX = -2147483647, MIN = 2147483647;

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> A[i][j];
			if (MAX < A[i][j]) 
				MAX = A[i][j];
		}
		if (MAX < MIN)
			MIN = MAX;
		MAX = -2147483647;
	}
	cout << MIN << endl;
	//system("pause");
	return 0;
}