#include <iostream>
#include <algorithm>
using namespace std;

long long Combin(int N, int M) {
	
	const int bln = 1000000000;
	int i = N;
	long double ans = 1;

	for (int j = 1; j <= min(M, N - M); j++, i--) {
		ans *= i; 
		ans /= j;
		if (ans >= bln)
			return -1;
	}
	return (long long)ans;
}

int main() {

	int T, N, M;

	cin >> T;
	while (T > 0) {
		cin >> N >> M;
		if (Combin(N, M) > 0)
			cout << Combin(N, M) << endl;
		else
			cout << "Too big!" << endl;
		T--;
	}
	//system("pause");
	return 0;
}