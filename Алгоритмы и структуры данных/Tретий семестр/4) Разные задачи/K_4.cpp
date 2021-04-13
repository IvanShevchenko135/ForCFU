#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct t {
	int x;
	int y;
};

bool comp(t u, t v) {
	return min(u.x, v.y) < min(u.y, v.x);
}

int main() {

	int n;
	vector <t> problems;

	while (cin >> n) {
		problems.resize(n);
		for (int i = 0; i < n; i++) {
			cin >> problems[i].x;
		}
		for (int i = 0; i < n; i++) {
			cin >> problems[i].y;
		}
		sort(problems.begin(), problems.end(), comp);
		int w = problems[0].x, x_sum = problems[0].x, y_sum = 0;
		for (int i = 1, j = 0; i < n; i++, j++) {
			x_sum += problems[i].x;
			y_sum += problems[j].y;
			w += max(x_sum - (y_sum + w), 0);
		}
		y_sum += problems[n - 1].y;
		int ans = w + y_sum;
		cout << ans << endl;
	}
	return 0;
}