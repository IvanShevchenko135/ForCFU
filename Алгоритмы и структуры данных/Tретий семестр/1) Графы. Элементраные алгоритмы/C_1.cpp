#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

void multiply(vector < vector <long long> >& a, vector < vector <long long> >& b) {
	vector < vector <long long> > c;
	c.resize(a.size());
	for (int i = 0; i < c.size(); i++) c[i].resize(b.size());
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < b.size(); j++) {
			long long ans = 0;
			for (int k = 0; k < c.size(); k++) {
				ans += a[i][k] * b[k][j];
			}
			c[i][j] = ans;
		}
	}
	for (int i = 0; i < c.size(); i++) {
		for (int j = 0; j < c.size(); j++) {
			b[i][j] = c[i][j];
		}
	}
	return;
}

int main() {

	int n;
	vector < vector <long long> > g;
	vector < vector <long long> > step;
	vector < vector <long long> > ans;

	cin >> n;
	vector <int> tmp;
	int max_v = INT_MIN;
	for (int i = 0; i < 2 * n; i++) {
		int el;
		cin >> el;
		max_v = max(max_v, el);
		tmp.push_back(el);
	}
	max_v++;
	g.resize(max_v);
	step.resize(max_v);
	ans.resize(max_v);
	for (int i = 0; i < g.size(); i++) {
		g[i].resize(max_v);
		step[i].resize(max_v);
		ans[i].resize(max_v);
	}
	for (int i = 0; i < tmp.size(); i += 2) {
		g[tmp[i]][tmp[i + 1]] = 1;
		step[tmp[i]][tmp[i + 1]] = 1;
		ans[tmp[i]][tmp[i + 1]] = 1;
	}
	for (int k = 0; k < n + 1; k++) {
		multiply(g, step);
		for (int i = 0; i < step.size(); i++) {
			for (int j = 0; j < step.size(); j++) {
				ans[i][j] += step[i][j];
			}
		}
	}
	for (int k = 0; k < n; k++) {
		multiply(g, step);
		for (int i = 0; i < step.size(); i++) {
			for (int j = 0; j < step.size(); j++) {
				//cout << step[i][j] << ' ';
				if (step[i][j] != 0) ans[i][j] = -1;
			}
			//cout << endl;
		}
		//cout << endl;
	}
	for (int i = 0; i < ans.size(); i++) {
		for (int j = 0; j < ans.size(); j++) {
			cout << ans[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}