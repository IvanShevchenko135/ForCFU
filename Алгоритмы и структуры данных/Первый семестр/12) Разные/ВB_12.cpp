#include <iostream>
using namespace std;

int main() {

	int T, N, matrix[100][100], main, side;

	cin >> T;
	while (T--) {
		cin >> N;
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				cin >> matrix[i][j];
		main = 0;
		side = 0;
		for (int i = 0, j = 0; i < N; i++, j++)
			main += matrix[i][j];
		for (int i = 0, j = N - 1; i < N; i++, j--)
			side += matrix[i][j];
		cout << main << " " << side << endl;
	}
	//system("pause");
	return 0;
}