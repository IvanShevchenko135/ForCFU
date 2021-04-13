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

int main() {
	int t, l, r;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> l >> r;
		cout << r / 4 + r / 7 - r / 28 - ((l - 1) / 4 + (l - 1) / 7 - (l - 1) / 28) << endl;
	}
	//system("pause");
	return 0;
}