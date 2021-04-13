#include <iostream>
using namespace std;

long long F[41], T, f;

int main() {
	F[0] = 0;
	F[1] = 1;
	for (int i = 2; i < 41; i++)
		F[i] = F[i - 1] + F[i - 2];
	cin >> T;
	for (T; T > 0; T--) {
		cin >> f;
		cout << F[f] << endl;
	}
	return 0;
}