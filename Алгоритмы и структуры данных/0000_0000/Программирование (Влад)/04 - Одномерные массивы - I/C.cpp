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
	int n, tmp; vector<int> even, uneven;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		tmp % 2 == 0 ? even.push_back(tmp) : uneven.push_back(tmp);
	}
	for (int i = 0; i < uneven.size(); i++) printf("%d ", uneven[i]);
	printf("\n");
	for (int i = 0; i < even.size(); i++) printf("%d ", even[i]);
	printf("\n");
	//system("pause");
	return 0;
}