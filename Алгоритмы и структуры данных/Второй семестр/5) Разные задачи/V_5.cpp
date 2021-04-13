#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct crd {
	long long x;
	long long y;
};

int dir(crd a, crd b, crd c) {
	long long s = (a.x * b.y + b.x * c.y + c.x * a.y) - (a.y * b.x + b.y * c.x + c.y * a.x);
	if (s == 0) return 0;
	if (s > 0) return 1;
	if (s < 0) return -1;
}

bool comp1(crd a, crd b) {
	if (a.x == b.x) return a.y < b.y;
	else return a.x < b.x;
}

int main() {

	int n;
	long long s = 0;
	cin >> n;
	vector <crd> p(n);

	for (int i = 0; i < n; i++) cin >> p[i].x >> p[i].y;
	sort(p.begin(), p.end(), comp1);
	vector <crd> h1, h2;
	h1.push_back(p[0]);
	h2.push_back(p[0]);
	for (int i = 1; i < n; i++) {
		if (i == n - 1 || dir(p[0], p[i], p[n - 1]) == -1) {
			while (h1.size() > 1 && dir(h1[h1.size() - 2], h1[h1.size() - 1], p[i]) != -1) h1.pop_back();
			h1.push_back(p[i]);
		}
		if (i == n - 1 || dir(p[0], p[i], p[n - 1]) == 1) {
			while (h2.size() > 1 && dir(h2[h2.size() - 2], h2[h2.size() - 1], p[i]) != 1) h2.pop_back();
			h2.push_back(p[i]);
		}
	}
	p.clear();
	for (int i = 0; i < h1.size(); i++) p.push_back(h1[i]);
	for (int i = h2.size() - 2; i > 0; i--) p.push_back(h2[i]);
	for (int i = 0; i < p.size() - 1; i++) {
		s += p[i].x * p[i + 1].y;
	}
	for (int i = 0; i < p.size() - 1; i++) {
		s -= p[i + 1].x * p[i].y;
	}
	s += p[p.size() - 1].x * p[0].y;
	s -= p[0].x * p[p.size() - 1].y;
	s = abs(s);
	cout << s << endl;
	return 0;
}