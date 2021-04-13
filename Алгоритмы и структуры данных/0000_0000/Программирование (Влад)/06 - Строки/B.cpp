#define _CRT_SECURE_NO_WARNINGS
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;


int main() {
	string s;
	while (getline(cin, s)) {
		istringstream k(s);
		string t; int cnt = 0;
		while (k >> t) cnt++;
		if (cnt) cout << cnt << endl;
	}
	//system("pause");
}