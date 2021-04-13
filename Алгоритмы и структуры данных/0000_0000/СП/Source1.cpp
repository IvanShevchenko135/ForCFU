#include <iostream>
#include <algorithm>
using namespace std;

int score[300000];

bool comp(int a, int b) { return a > b; }

int main() {

	int n, first = 1;

	cin >> n;
	for (int i = 0; i < n; i++) cin >> score[i];
	sort(score, score + n, comp);
	int maxv = 1 + score[0];
	for (int i = 1; i < n; i++) {
		if (score[i] + n >= maxv) {
			first++;
			if (score[i] + i + 1 > maxv) maxv = score[i] + i + 1;
		}
		else break;
	}
	cout << first << endl;
	return 0;
}