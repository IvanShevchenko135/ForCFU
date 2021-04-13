#include <iostream>
using namespace std;

int GCD(int N, int M) {
	if (M == 0)
		return N;
	return GCD(M, N % M);
}

int main() {
	int N, M;
	while (cin >> N >> M) {
		if (GCD(N, M) == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	//system("pause");
	return 0;
}