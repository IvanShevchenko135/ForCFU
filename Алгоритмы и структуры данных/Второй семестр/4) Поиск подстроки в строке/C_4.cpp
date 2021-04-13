#include <iostream>
#include <string>
#include <queue>
using namespace std;

string a, b, ab;
int m[2000002];

int main() {

	int count = 0;
	queue <int> q;

	cin >> a;
	cin >> b;
	ab = b + '#' + a;
	for (int i = 1; i < ab.size(); i++) {
		int j = m[i - 1];
		while (true) {
			if (ab[i] == ab[j]) {
				m[i] = j + 1;
				break;
			}
			if (j == 0) break;
			else  j = m[j - 1];
		}
		if (m[i] == b.size()) {
			count++;
			q.push((i - b.size() - m[i]) + 1);
		}
	}
	cout << count << endl;
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;
	return 0;
}