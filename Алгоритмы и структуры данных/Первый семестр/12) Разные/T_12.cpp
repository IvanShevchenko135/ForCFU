#include <iostream>
using namespace std;

int main() {

	int T, N[100], n, min = 1001, max = -1, min_i, max_i;

	cin >> T;
	while (T--) {
		cin >> n;
		min = 1001; 
		max = -1;
		for (int i = 0; i < n; i++) {
			cin >> N[i];
			if (N[i] > max) {
				max = N[i];
				max_i = i;
			}
			if (N[i] < min) {
				min = N[i];
				min_i = i;
			}
		}
		swap(N[min_i], N[max_i]);
		for (int i = 0; i < n - 1; i++)
			cout << N[i] << " ";
		cout << N[n - 1] << endl;
	}
	//system("pause");
	return 0;
}