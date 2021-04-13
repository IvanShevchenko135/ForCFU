#include <iostream>
#include <cmath>
using namespace std;

long long T, N, A, B;
bool check = 1;

double S(int N) {
	return sqrt(N + 1) - 1;
}

int main() {
	cin >> T;
	while (T--) {
		cin >> N;
		for (int i = N - 1; true; i--)
			if (S(i) == (int)S(i)) {
				A = i;
				break;
			}
		for (int i = N + 1; true; i++)
			if (S(i) == (int)S(i)) {
				B = i;
				break;
			}
		cout << A << " " << B << endl;
	}
	//system("pause");
	return 0;
}