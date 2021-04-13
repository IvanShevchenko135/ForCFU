#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {

	int n, v = 0, c = 1, ptr = 0;
	vector <int> op;
	vector <int> val;
	stack <int> dead_end;

	cin >> n;
	vector <int> first(n);
	for (int i = 0; i < n; i++) cin >> first[i];
	while (ptr < first.size()) {
		while (dead_end.empty() || ptr < first.size() && first[ptr] < dead_end.top()) {
			dead_end.push(first[ptr++]);
			v++;
		}
		op.push_back(1);
		val.push_back(v);
		v = 0;
		while (!dead_end.empty() && (ptr < first.size() && first[ptr] > dead_end.top() || first.size() == ptr)) {
			if (dead_end.top() == c) {
				dead_end.pop();
				c++; v++;
			}
			else {
				cout << '0' << endl;
				return 0;
			}
		}
		op.push_back(2);
		val.push_back(v);
		v = 0;
	}
	for (int i = 0; i < op.size(); i++) {
		cout << op[i] << ' ' << val[i] << endl;
	}
	return 0;
}