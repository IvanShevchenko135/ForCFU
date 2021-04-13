#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

int ans[10000], tmp[10000];

void longMult(int a[], int b, int c[]) {
	c[1] = 0;
	c[a[0] + 1] = 0;
	for (int i = 1; i <= a[0]; i++) {
		c[i + 1] = (c[i] + a[i] * b) / 10000;
		c[i] = (c[i] + a[i] * b) % 10000;
	}
	if (c[a[0] + 1] == 0) c[0] = a[0];
	else c[0] = a[0] + 1;
	return;
}

void writeLong(int c[]) {
	cout << c[c[0]];
	for (int i = c[0] - 1; i > 0; i--)
		cout << fixed << setw(4) << setfill('0') << c[i];
	cout << endl;
	return;
}

void factor(int a[], int b, int c[]) {
	a[0] = 1;
	a[1] = 1;
	for (int i = 2; i <= b; i++) {
		longMult(a, i, c);
		swap(ans, tmp);
	}
	return;
}

int main() {

	int t, n;

	cin >> t;
	while (t--) {
		cin >> n;
		factor(ans, n, tmp);
		writeLong(ans);
	}
	//system("pause");
	return 0;
}