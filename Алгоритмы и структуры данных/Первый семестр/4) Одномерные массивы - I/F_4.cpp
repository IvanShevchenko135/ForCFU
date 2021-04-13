#include <iostream>


using namespace std;

int main() {

	int N[100];
	int i, k, n, x, y;
	long long dif = 5000000000;

	cin >> n;
	for (i = 0; i < n; i++)
		cin >> N[i];
	for (k = 0; k < n; k++) {
		for (i = 0; i < n; i++) {
			if ((abs(N[k] - N[i]) < dif) && (i != k)) {
				dif = abs(N[k] - N[i]);
				x = k;
				y = i;
			}
		}
	}
	cout << x << " " << y << endl;
	return 0;
}
