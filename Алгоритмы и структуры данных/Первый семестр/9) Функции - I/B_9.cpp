#include <iostream>
#include <algorithm>
using namespace std;

void MinMax(int a, int b, int c, int d, int &maxv, int &minv) {
	maxv = max(a, b);
	maxv = max(c, maxv);
	maxv = max(d, maxv);
	minv = min(a, b);
	minv = min(c, minv);
	minv = min(d, minv);
	return;
}

int main() {
	int a, b, c, d, maxv, minv;
	cin >> a >> b >> c >> d;
	MinMax(a, b, c, d, maxv, minv);
	cout << minv << " " << maxv << endl;
	//system("pause");
	return 0;
}