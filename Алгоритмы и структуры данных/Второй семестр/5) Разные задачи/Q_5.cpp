#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isSubstr(string a, string b, int &index) {

	if (b.size() > a.size()) return false;

	for (int i = 0; i <= a.size() - b.size(); i++) {
		string c = a.substr(i, b.size());
		if (c == b) {
			index = i + b.size();
			return true;
		}
	}

	return false;
}

int main() {

	string way, tmp, a, b;
	bool forward = false, backward = false;

	cin >> way >> a >> b;
	int i;
	if (isSubstr(way, a, i)) {
		if (i < way.size()) {
			tmp = way.substr(i, way.size() - i);
			if (isSubstr(tmp, b, i)) forward = true;
		}
	}
	reverse(way.begin(), way.end());
	if (isSubstr(way, a, i)) {
		if (i < way.size()) {
			tmp = way.substr(i, way.size() - i);
			if (isSubstr(tmp, b, i)) backward = true;
		}
	}

	if (forward && backward) cout << "both" << endl;
	else if (forward) cout << "forward" << endl;
	else if (backward) cout << "backward" << endl;
	else cout << "fantasy" << endl;
	//system("pause");
	return 0;	
}