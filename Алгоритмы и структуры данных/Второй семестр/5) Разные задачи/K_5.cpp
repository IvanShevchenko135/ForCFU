#include <iostream>
using namespace std;

int a[500000];

long long merge(int l, int r) {
	
	long long p = 0;
	int c = (r + l) / 2;
	int *tmp = new int[r - l + 1];
	int i = l, j = c + 1, k = 0;

	while (i <= c && j <= r) {
		if (a[i] < a[j]) {
			tmp[k] = a[i]; 
			i++; k++;
		}
		else {
			tmp[k] = a[j];
			p += c - i + 1;
			j++; k++;
		}
	}
	while (i <= c) {
		tmp[k] = a[i];
		i++; k++;
	}
	while (j <= r) {
		tmp[k] = a[j];
		j++; k++;
	}
	for (int i = l, j = 0; i <= r; i++, j++) a[i] = tmp[j];
	delete [] tmp;
	return p;
}

long long mergeSort(int l, int r) {
	
	long long p = 0;
	int c = (r + l) / 2;

	if (l < r) {
		p += mergeSort(l, c);
		p += mergeSort(c + 1, r);
		p += merge(l, r);
	}
	return p;
}

int main() {

	int n;
	
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	long long p = mergeSort(0, n - 1);
	cout << p << endl;
	return 0;
}