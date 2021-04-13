#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	int n, k, t, chk;
	string a, b;
	cin >> t;
	for (int i = 0; i < t; i++) {
		chk = 0;
		cin >> a >> b;
		n = a.find(b); k = a.find("T");
		if (k != -1 && n != -1) printf("Y\n");
		else printf("N\n");
	}
	//system("pause");
	return 0;
}