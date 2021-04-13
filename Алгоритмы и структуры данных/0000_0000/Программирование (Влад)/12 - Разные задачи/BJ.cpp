#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

int king, knight, bishop, rook, queen;

int main() {
	int n, x, y;
	scanf("%d %d %d", &n, &x, &y);
	if (n == 2) {
		king = 3;
		bishop = 1;
		rook = 2;
		queen = 3;
	}
	else if (n > 2) {
		if (x < n)king++;
		if (x > 1)king++;
		if (y < n) king++;
		if (y > 1)king++;
		if (x < n && y < n)king++;
		if (y < n && x > 1)king++;
		if (x < n && y > 1)king++;
		if (x > 1 && y > 1)king++;
		if (x < n - 1 && y < n)knight++;
		if (x < n && y < n - 1)knight++;
		if (y < n - 1 && x > 1)knight++;
		if (y < n && x > 2)knight++;
		if (x < n - 1 && y > 1)knight++;
		if (x < n && y > 2)knight++;
		if (x > 1 && y > 2)knight++;
		if (x > 2 && y > 1)knight++;
		bishop = min(n - x, n - y) + min(x - 1, y - 1) + min(x - 1, n - y) + min(n - x, y - 1);
		rook = 2 * n - 2;
		queen = bishop + rook;
	}
	printf("King: %d\nKnight: %d\nBishop: %d\nRook: %d\nQueen: %d\n", king, knight, bishop, rook, queen);
	//system("pause");
	return 0;
}