#include <iostream>
#include <string>
using namespace std;

int i, j, x = 0, sum = 0;
string X, Y, Z;

int main() {
	cin >> X >> Y;
	if (X.size() < Y.size()) {
		cout << 0 << endl;
		//system("pause");
		return 0;
	}
	for (i = 0; i <= X.size() - Y.size(); i++) {
		Z = X.substr(i, Y.size());
		for (j = 0; j < Y.size(); j++) {
			if (Z[j] != Y[j]) {
				if (x == 0)
					x = 1;
				else
					x = 2;
			}
		}
		if (x != 2)
			sum++;
		x = 0;
	}
	cout << sum << endl;
	//system("pause");
	return 0;
}
