#include <iostream>

using namespace std;

int main() {

	long long X, Y, Z;

	cin >> X >> Y >> Z;
	if ((X > Y) && (Y > Z))
		cout << 2 * X << " " << 2 * Y << " " << 2 * Z << endl;
	else
		cout << X * (-1) << " " << Y * (-1) << " " << Z * (-1) << endl;

	return 0;
}