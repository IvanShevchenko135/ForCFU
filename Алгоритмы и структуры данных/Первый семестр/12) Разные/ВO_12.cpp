#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string SortString(string s) {
	for (int i = 0; i < s.size() - 1; i++) {
		for (int j = 0; j < s.size() - 1; j++) {
			if (s[j] > s[j + 1])
				swap(s[j], s[j + 1]);
		}
	}
	return s;
}

int main() {

	int T;
	string S, a, b;

	cin >> T;
	while (T--) {
		cin >> S;
		a = S.substr(0, S.size() / 2);
		b = S.substr((S.size() + 1) / 2, S.size());
		a = SortString(a);
		b = SortString(b);
		if (a == b)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	//system("pause");
	return 0;
}