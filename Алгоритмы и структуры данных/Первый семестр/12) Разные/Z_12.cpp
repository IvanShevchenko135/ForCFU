#include <iostream>
#include <fstream>
using namespace std;

int main() {
	
	int T, N, M, matrix[100][100];
	ifstream input("Z.inp");
	ofstream output("Z.out");

	input >> T;
	while (T--) {
		input >> N >> M;
		int count = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				count++;
				matrix[i][j] = count;
			}
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				output << matrix[i][j] << " ";
			}
			output << endl;
		}
	}
	return 0;
}