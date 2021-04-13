#include <iostream>
#include <string>
using namespace std;

void CantorSet(int n, string &str, int &k) {
	k--;
	for (int i = n / 3; i < str.size(); i += 2 * (n / 3)) {
		for (int j = 0; j < n / 3; j++) {
			str[i + j] = ' ';
		}
	}
	if (k > 0)
		CantorSet(n / 3, str, k);
	return;
}

int main() {

	int n, k;
	string str = "#";

	cin >> n >> k;
	for (int i = 0; i < n - 1; i++)
		str += "#";
	CantorSet(n, str, k);
	cout << str << endl;
	//system("pause");
	return 0;
}