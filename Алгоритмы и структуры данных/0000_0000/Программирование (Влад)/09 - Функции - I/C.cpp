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

void shiftArray(int a[], int n, int k, string s) {
	if (s == "left") {
		for (int i = k; i < n; i++) cout << a[i] << " ";
		for (int i = 0; i < k; i++) cout << a[i] << " ";
	}
	else {
		for (int i = n - k; i < n; i++) cout << a[i] << " ";
		for (int i = 0; i < n - k; i++) cout << a[i] << " ";
	}
}

int main() {
	int n, k, s[100];
	string lr;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> s[i];
	cin >> k >> lr;
	shiftArray(s, n, k, lr);
	//system("pause");
	return 0;
}