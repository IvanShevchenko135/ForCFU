#include <iostream>
#include <string>
using namespace std;

bool check = 1;
int sum = 0, sch_X[26], sch_Z[26];
string X, Y, Z;

int main() {
	cin >> X >> Y;
	for (int i = 0; i < X.size(); i++)
		sch_X[(int)(X[i] - 'a')]++;
	if (X.size() > Y.size()) {
		cout << 0 << endl;
		//system("pause");
		return 0;
	}
	for (int i = 0; i <= Y.size() - X.size(); i++) {
		Z = Y.substr(i, X.size());
		for (int j = 0; j < X.size(); j++) {
			sch_Z[(int)(Z[j] - 'a')]++;
		}
		for (int j = 0; j < 26; j++) {
			if (sch_X[j] != sch_Z[j]) {
				check = 0;
				break;
			}
		}
		if (check)
			sum++;
		check = 1;
		for (int j = 0; j < 26; j++)
			sch_Z[j] = 0;
	}
	cout << sum << endl;
	//system("pause");
	return 0;
}