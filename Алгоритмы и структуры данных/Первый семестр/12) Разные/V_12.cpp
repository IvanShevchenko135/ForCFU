#include <iostream>
using namespace std;

int main() {

	int N, L, R, four, seven, both, sum;

	cin >> N;
	while (N--) {
		cin >> L >> R;
		sum = 0;
		four = R / 4 - (L - 1) / 4;
		seven = R / 7 - (L - 1) / 7;
		both = R / 28 - (L - 1) / 28;
		sum = four + seven - both;
		cout << sum << endl;
	}
	//system("pause");
	return 0;
}