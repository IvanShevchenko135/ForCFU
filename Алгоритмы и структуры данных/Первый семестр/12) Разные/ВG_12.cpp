#include <iostream>
using namespace std;

int main() {

	int T, N, R, i = 1;

	while (cin >> R >> N) {
		if (N == 0 && R == 0) {
			//system("pause");
			return 0;
		}
		cout << "Case " << i << ": ";
		if (N >= R)
			cout << 0 << endl;
		else if (R > 27 * N)
			cout << "impossible" << endl;
		else {
			if (R % N == 0)
				cout << R / N - 1 << endl;
			else 
				cout << R / N << endl;
		}
		i++;
	}
}