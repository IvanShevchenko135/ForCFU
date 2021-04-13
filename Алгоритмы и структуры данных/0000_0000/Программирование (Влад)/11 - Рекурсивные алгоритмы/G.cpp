#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>
#include <fstream>
#include <queue>

using namespace std;

int board[25][25];

void printChess(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			board[i][j] ? cout << 'Q' : cout << '.';
		}
		cout << endl;
	}
}

bool chk(int n, int row, int col) {
	for (int i = 0; i < col; i++) {
		if (board[row][i]) return false;
	}
	for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
		if (board[i][j]) return false;
	}
	for (int i = row, j = col; j >= 0 && i < n; i++, j--) {
		if (board[i][j]) return false;
	}
	return true;
}

bool queens(int cnt, int n) {
	if (cnt >= n) return true;
	for (int i = 0; i < n; i++) {
		if (chk(n, i, cnt)) {
			board[i][cnt] = 1;
			if (queens(cnt + 1, n)) return true;
			board[i][cnt] = 0;
		}
	}
	return false;
}

int main() {
	int n, pos;
	cin >> n >> pos;
	board[pos-1][0] = 1;
	int t = queens(1, n);
	printChess(n);
	//system("pause");
	return 0;
}