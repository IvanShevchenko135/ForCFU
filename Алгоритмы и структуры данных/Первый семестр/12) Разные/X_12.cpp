#include <iostream>
#include <algorithm>
using namespace std;

int amount[101];

int main() {

	int T, n, max, N[1001];

	cin >> T;
	while (T--) {
		cin >> n;
		max = 0;
		for (int i = 0; i < 101; i++)
			amount[i] = 0;
		for (int i = 0; i < n; i++) {
			cin >> N[i];
			amount[N[i]]++;
		}
		for (int i = 0; i < 101; i++) {
			if (amount[i] > max)
				max = amount[i];
		}
		cout << max << endl;
	}
	//system("pause");
	return 0;
}