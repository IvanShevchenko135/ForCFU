#include <iostream>
#include <string>
using namespace std;

int main() {

	int t;
	string n;

	cin >> t;
	while (t--) {
		cin >> n;
		bool contain[10];
		for (int i = 0; i < 10; i++) contain[i] = false;
		int missing = 10;
		for (int i = 0; i < n.size(); i++) {
			int digit = n[i] - '0';
			if (contain[digit] == false) {
				missing--;
				contain[digit] = true;
			}
		}
		cout << missing << endl;
		for (int i = 0; i < 10; i++) {
			if (contain[i] == false) {
				if (missing == 1)
					cout << i << endl;
				else {
					cout << i << " ";
					missing--;
				}
			}
		}
	}
	return 0;
}