#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string.h>

using namespace std;

int main() {
	char a[11000], b[11000]; cin >> a >> b;
	bool chk = true;
	for (int i = 0; i < min(strlen(a), strlen(b)); i++) {
		if (a[i] - b[i] != 0) {
			a[i] - b[i] < 0 ? cout << a : cout << b;
			chk = false;
			break;
		}
	}
	if (chk) strlen(a) < strlen(b) ? cout << a : cout << b;
	//system("pause");
	return 0;
}