#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
using namespace std;

int n, m;
long long first[100000], second[100000], merge[200000];

int main() {

	freopen("merge.dat", "r", stdin);
	freopen("merge.sol", "w", stdout);

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> first[i];
	cin >> m;
	for (int j = 0; j < m; j++)
		cin >> second[j];
	int i = 0;
	int j = 0;
	int u = 0;
	while (u < (n + m)) {
		while (first[i] >= second[j] && i < n && j < m) {
			merge[u] = first[i];
			i++; u++;
		}
		while (first[i] < second[j] && i < n && j < m) {
			merge[u] = second[j];
			j++; u++;
		}
		while (i == n && j < m) {
			merge[u] = second[j];
			j++; u++;
		}
		while (j == m && i < n) {
			merge[u] = first[i];
			i++; u++;
		}
	}
	for (int v = 0; v < n + m; v++)
		cout << merge[v] << endl;
	//system("pause");
	return 0;
}