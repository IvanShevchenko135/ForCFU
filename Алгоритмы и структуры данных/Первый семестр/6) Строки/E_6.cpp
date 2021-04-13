#include <iostream>
using namespace std;

bool check = 1, x;
char X[10001], Y[10001];

int main() {
	cin >> X >> Y;
	for (int i = 0; i < 10001; i++) {
		if (X[i] < Y[i] && X[i] != '/0' && Y[i] != '/0') {
			cout << X << endl;
			check = 0;
			break;
		}
		else if (X[i] > Y[i] && X[i] != '/0' && Y[i] != '/0') {
			cout << Y << endl;
			check = 0;
			break;
		}
		if (X[i] == NULL) {
			x = 1;
			break;
		}
		if (Y[i] == NULL) {
			x = 0;
			break;
		}
	}
	if (check) {
		if (x)
			cout << X << endl;
		else
			cout << Y << endl;
	}
	//system("pause");
	return 0;
}