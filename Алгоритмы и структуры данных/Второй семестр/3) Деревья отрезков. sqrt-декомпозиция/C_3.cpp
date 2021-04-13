#include <iostream>
using namespace std;

long long t[4000000], start = 1048576, n, sum = 0;

long long update(int i) {
	int l = start, r = start + i - 1;
	long long sum = 0;
	while (l <= r) {
		if (l % 2 == 1) {
			sum += t[l];
			l++;
		}
		if (r % 2 == 0) {
			sum += t[r];
			r--;
		}
		l /= 2;
		r /= 2;
	}
	t[start + i] += i;
	int j = (start + i) / 2;
	while (j > 0) {
		t[j] = t[j * 2] + t[j * 2 + 1];
		j /= 2;
	}
	return sum;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int v;
		cin >> v;
		sum += update(v);
	}
	cout << sum << endl;
	return 0;
}