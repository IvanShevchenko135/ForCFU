#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int king = 0, knight = 0, bishop = 0, rook = 0, queen = 0, n, x, y;

	cin >> n;
	cin >> x >> y;
	
	if (x != 1)
		king ++;
	if (x != n)
		king ++;
	if (y != 1)
		king ++;
	if (y != n)
		king ++;
	if (x != 1 && y != 1)
		king++;
	if (x != n && y != n)
		king++;
	if (x != 1 && y != n)
		king++;
	if (x != n && y != 1)
		king++;

	if (x > 1 && y > 2)
		knight++;
	if (x < n && y > 2)
		knight++;
	if (x > 2 && y > 1)
		knight++;
	if (x < n - 1 && y > 1)
		knight++;
	if (x > 1 && y < n - 1)
		knight++;
	if (x < n && y < n - 1)
		knight++;
	if (x > 2 && y < n)
		knight++;
	if (x < n - 1 && y < n)
		knight++;
	
	bishop = bishop + min(n - x, n - y);
	bishop = bishop + min(n - x, y - 1);
	bishop = bishop + min(x - 1, n - y);
	bishop = bishop + min(x - 1, y - 1);

	rook = rook + x - 1;
	rook = rook + y - 1;
	rook = rook + n - x;
	rook = rook + n - y;

	queen = bishop + rook;

	if (n == 1) {
		king = 0;
		knight = 0;
		bishop = 0;
		rook = 0;
		queen = 0;
	}

	cout << "King: " << king << endl;
	cout << "Knight: " << knight << endl;
	cout << "Bishop: " << bishop << endl;
	cout << "Rook: " << rook << endl;
	cout << "Queen: " << queen << endl;
	//system("pause");
	return 0;
}