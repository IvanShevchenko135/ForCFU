#include <iostream>
#include <string>
#include <sstream>
using namespace std;

char s[1000];
int c;
string str;

int main() {
	while (fgets(s, 999, stdin) != NULL) {
		stringstream is(s); // В is записывается 1 слово из s
		c = 0;
		while (is >> str) // Пока в str записываются слова
			c++;
		if (c != 0)
			cout << c << endl;
	}
	return 0;
}