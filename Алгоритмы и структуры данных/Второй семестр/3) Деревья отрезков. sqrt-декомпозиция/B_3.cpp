#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int t_sum[400000], t_min[400000], inc[400000], start = 1;

void increase(int i, int v) {
	inc[i] += v;
	t_min[i] += v;
	return;
}

void push(int i) {
	increase(i * 2, inc[i]);
	increase(i * 2 + 1, inc[i]);
	inc[i] = 0;
	return;
}

void changeMin(int v, int i, int il, int ir, int l, int r) {
	if (il > r || ir < l) return;
	if (il >= l && ir <= r) {
		increase(i, v);
		return;
	}
	push(i);
	int m = (il + ir) / 2;
	changeMin(v, i * 2, il, m, l, r);
	changeMin(v, i * 2 + 1, m + 1, ir, l, r);
	t_min[i] = min(t_min[i * 2], t_min[i * 2 + 1]);
	return;
}

int changeSum(int x) {
	int i = x + start;
	t_sum[i] *= -1;
	int n = i / 2;
	while (n > 0) {
		t_sum[n] = t_sum[n * 2] + t_sum[n * 2 + 1];
		n /= 2;
	}
	return 2 * t_sum[i];
}

int main() {

	int n, k, q;
	string b_s;

	cin >> b_s;
	n = b_s.size();
	while (start < n) start <<= 1;
	for (int i = 0; i < n; i++) {
		if (b_s[i] == '(') {
			t_sum[start + i] = 1;
			t_min[start + i] = t_min[start + i - 1] + 1;
		}
		else {
			t_sum[start + i] = -1;
			t_min[start + i] = t_min[start + i - 1] - 1;
		}
	}
	for (int i = start - 1; i > 0; i--) {
		t_sum[i] = t_sum[i * 2] + t_sum[i * 2 + 1];
		t_min[i] = min(t_min[i * 2], t_min[i * 2 + 1]);
	}
	cin >> k;
	while (k--) {
		cin >> q;
		int v = changeSum(q);
		changeMin(v, 1, start, 2 * start - 1, start + q, start + n - 1);
		if (t_sum[1] == 0 && t_min[1] == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}