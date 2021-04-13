#include <iostream>
#include <string>
using namespace std;

int j, i = 0, x = 0;
string s1, s2;

int main() {
	cin >> s1;
	s2 = s1;
	i = 0;
	j = s1.size() - 1;
	while (true) {
		if (s1[i] != s1[j]) {
			x = 1;
			break;
		}
		else if (i >= j) 
			break;
		else
			i++; j--;
	}
	if (x == 0 && s1.size() % 2 == 0) {
		s1.erase(i, 1);
	}
	else {
		s1.erase(i, 1);
		s2.erase(j, 1);
		i = 0;
		j = s1.size() - 1;
		while (j >= i) {
			if (s1[i] != s1[j]) {
				cout << s2 << endl;
				//system("pause");
				return 0;
			}
			else
				i++; j--;
		}
	}
	cout << s1 << endl;
	//system("pause");
	return 0;
}