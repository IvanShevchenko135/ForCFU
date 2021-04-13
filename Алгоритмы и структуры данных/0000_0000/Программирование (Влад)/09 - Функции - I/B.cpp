#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

void MinMax(int a, int b, int c, int d, int &maxv, int &minv) {
	if (minv > a) minv = a;
	if (minv > c) minv = c;
	if (minv > d) minv = d;
	if (maxv < b) maxv = b;
	if (maxv < c) maxv = c;
	if (maxv < d) maxv = d;
	printf("%d %d", minv, maxv);
}

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	MinMax(a, b, c, d, a, b);
	//system("pause");
	return 0;
}

/*
1 1
2 2
3 6


*/