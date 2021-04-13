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

vector<string> inp;
vector<string> fraktal;

void build(int x, int y, int n, int k) {
	if (!k) return;
	int m = 1;
	for (int i = 0; i < k; i++) m *= n;
	int step = m / n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (inp[i][j] == '*') {
				for (int i1 = i * step; i1 < (i + 1) * step; i1++) {
					for (int j1 = j * step; j1 < (j + 1) * step; j1++) fraktal[x + i1][y + j1] = '*';
				}
			}
			else build(x + i * step, y + j * step, n, k - 1);
		}
	}

}

int main() {
	//ifstream in("input.txt");
	//ofstream out("output.txt");
	int n, k;
	cin >> n >> k;
	inp.resize(n);
	for (int i = 0; i < n; i++) cin >> inp[i];
	int size = 1;
	for (int i = 0; i < k; i++) size *= n;
	fraktal.resize(size);
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) fraktal[i].push_back('.');
	}
	build(0, 0, n, k);
	for (int i = 0; i < size; i++) cout << fraktal[i] << endl;
	//system("pause");
	return 0;
}