#include <iostream>
#include <string>
#include <sstream>
using namespace std;

char s[1000];
int c;
string str;

int main() {
	while (fgets(s, 999, stdin) != NULL) {
		stringstream is(s); // � is ������������ 1 ����� �� s
		c = 0;
		while (is >> str) // ���� � str ������������ �����
			c++;
		if (c != 0)
			cout << c << endl;
	}
	return 0;
}