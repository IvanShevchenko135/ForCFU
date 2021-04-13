#include <iostream>
using namespace std;

long long tree[4000000], start = 1;

void add(int i, int v) {
	i += start;
	tree[i] = v;
	while (i / 2 > 0) {
		i /= 2;
		tree[i] = tree[i * 2] + tree[i * 2 + 1];
	}
	return;
}

long long sum(int l, int r) {
	l += start; r += start;
	long long ans = 0;
	while (l <= r) {
		if (l % 2 == 1) {
			ans += tree[l];
			l++;
		}
		if (r % 2 == 0) {
			ans += tree[r];
			r--;
		}
		l /= 2;
		r /= 2;
	}
	return ans;
}

int main() {

	int n, k, req, i, l, r;
	long long x;

	cin >> n >> k;
	while (start < n) start *= 2;
	while (k--) {
		cin >> req;
		if (req == 1) {
			cin >> i >> x;
			add(i, x);
		}
		else {
			cin >> l >> r;
			cout << sum(l, r) << endl;
		}
	}
	//system("pause");
	return 0;
}