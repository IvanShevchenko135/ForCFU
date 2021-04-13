#include<iostream>
using namespace std;

int balls[100500], st[100500];

int main() {

	int ptr = 1, next = 1, n;
	bool cheater = false;

	cin >> n;
	for (int i = 0; i < n; i++) cin >> balls[i];
	for (int i = 0; i < n; i++) {
		if (balls[i] > st[ptr - 1]) {
			for (int j = next; j < balls[i]; j++) {
				st[ptr] = j;
				ptr++;
			}
			next = balls[i] + 1;
		}
		else if (balls[i] == st[ptr - 1]) ptr--;
		else if (balls[i] < st[ptr - 1]) {
			cheater = true;
			break;
		}
	}
	if (cheater) cout << "Cheater" << endl;
	else cout << "Not a proof" << endl;
	//system("pause");
	return 0;
}