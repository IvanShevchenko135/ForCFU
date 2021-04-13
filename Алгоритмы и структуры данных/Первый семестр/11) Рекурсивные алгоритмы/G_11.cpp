#include <iostream>
using namespace std;

char board[25][25];

bool CheckCell(int size, int row, int column) {
	for (int j = 0; j < column; j++) {
		if (board[row][j] == 'Q')
			return 0;
	}
	for (int i = row - 1, j = column - 1; i >= 0 && j >= 0; i--, j--) {
		if (board[i][j] == 'Q')
			return 0;
	}
	for (int i = row + 1, j = column - 1; i < size && j >= 0; i++, j--) {
		if (board[i][j] == 'Q')
			return 0;
	}
	return 1;
}

bool CheckColumn(int size, int column){
	for (int i = 0; i < size; i++) {
		if (CheckCell(size, i, column)) {
			board[i][column] = 'Q';
			if (column == size - 1)
				return 1; 
			if (CheckColumn(size, column + 1))
				return 1;
			board[i][column] = '.';
		}
	}
	return 0;
}

int main() {

	int N, P;

	cin >> N >> P;
	board[P - 1][0] = 'Q';
	CheckColumn(N, 1);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (board[i][j] == 'Q')
				cout << board[i][j];
			else
				cout << '.';
		}
		cout << endl;
	}
	//system("pause");
	return 0;
}