#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

int one[100000], two[100000], three[100000];

void longMult(int a[], int b[], int c[]) {
	for (int j = 1; j <= b[0]; j++) {
		for (int u = j, i = 1; i <= a[0]; i++, u++) {
			c[u + 1] += (c[u] + a[i] * b[j]) / 10000;
			c[u] = (c[u] + a[i] * b[j]) % 10000;
			c[u + 1] == 0 ? c[0] = u : c[0] = u + 1;
		}
	}
	return;
}

int factor(int a) {

	int answer = 1;

	for (int i = 2; i <= a; i++) {
		answer *= i;
	}
	return answer;
}

void longPow(int a[], int b[], int c[], int power) {
	if (power == 0) {
		a[0] = 1;
		a[1] = 1;
		return;
	}
	if (power > 1) {
		power--;
		while (power--) {
			longMult(a, b, c);
			swap(one, three);
			fill(c, c + 10000, 0);
		}
	}
	return;
}

void writeLong(int c[]) {
	cout << c[c[0]];
	for (int i = c[0] - 1; i > 0; i--)
		cout << fixed << setw(4) << setfill('0') << c[i];
	cout << endl;
	return;
}

int main() {

	int k, n;

	freopen("paint.dat", "r", stdin);
	freopen("paint.sol", "w", stdout);

	cin >> k;
	cin >> n;
	int comb = factor(k) / factor(k - 4) - 1;
	for (int i = 1; comb > 0; i++) {
		one[i] = comb % 10000;
		one[0] = i;
		comb = comb / 10000;
	}
	for (int i = 0; i < 6; i++) {
		two[i] = one[i];
	}
	longPow(one, two, three, n - 1);
	comb = factor(k) / factor(k - 4);
	for (int i = 1; comb > 0; i++) {
		two[i] = comb % 10000;
		two[0] = i;
		comb = comb / 10000;
	}
	longMult(one, two, three);
	writeLong(three);
	//system("pause");
	return 0;
}