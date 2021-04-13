#include <iostream>
using namespace std;

int heep[2000000], ptr = 0;

void makeHeep(int i) {
	if (i * 2 > ptr) return;
	if (i * 2 + 1 > ptr) {
		if (heep[i * 2] > heep[i])
			swap(heep[i], heep[i * 2]);
		return;
	}
	if (heep[i * 2] > heep[i] || heep[i * 2 + 1] > heep[i]) {
		if (heep[i * 2] > heep[i * 2 + 1]) {
			swap(heep[i], heep[i * 2]);
			makeHeep(i * 2);
			return;
		}
		if (heep[i * 2] <= heep[i * 2 + 1]) {
			swap(heep[i], heep[i * 2 + 1]);
			makeHeep(i * 2 + 1);
			return;
		}
	}
}

void add(int v) {
	heep[++ptr] = v;
	int n = ptr;
	while (n / 2 > 0) {
		if (heep[n / 2] < heep[n])
			swap(heep[n / 2], heep[n]);
		n /= 2;
	}
	return;
}

int del() {
	int ans = heep[1];
	swap(heep[1], heep[ptr]);
	ptr--;
	makeHeep(1);
	return ans;
}

int main() {
	char q;
	while (cin >> q) {
		if (q == 'I') {
			int v;
			cin >> v;
			add(v);
		}
		else cout << del() << endl;
	}
	return 0;
}