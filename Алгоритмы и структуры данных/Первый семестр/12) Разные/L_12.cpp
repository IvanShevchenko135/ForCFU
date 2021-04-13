#include <iostream>
using namespace std;

int T, A[4], number, c;

int main() {
	cin >> T;
	while (T--) {
		c = 0;
		for (int i = 0; i < 4; i++)
			cin >> A[i];
		for (int i = 1; i < 4; i++) {
			if (A[0] != A[i]) {
				c++;
				number = i + 1;
			}
		}
		if (c > 1)
			number = 1;
		cout << number << endl;
	}
	//system("pause");
	return 0;
}