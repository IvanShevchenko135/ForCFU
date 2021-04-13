#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int first, second, a1, a2, a3, b1, b2, b3;

	cin >> a1 >> b1;
	cin >> a2 >> b2;
	cin >> a3 >> b3;

	first = a1 - a3;
	second = b1 - b2;

	cout << first << " " << second << endl;
	//system("pause");
	return 0;
}