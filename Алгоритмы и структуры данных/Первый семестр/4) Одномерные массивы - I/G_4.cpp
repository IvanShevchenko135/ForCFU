#include <iostream>

using namespace std;

int main() {

	int N[100];
	int A[100];
	int i, n, k, MIN, MAX;
	int mn = 2147483647;
	int mx = 0;

	cin >> n;
	for (i = 0; i < n; i++)
		cin >> N[i];
	for (i = 0; i < n; i++) {
		if (N[i] < mn) {
			mn = N[i];
			MIN = i;
		}
		if (N[i] > mx) {
			mx = N[i];
			MAX = i;
		}
	}
	k = 0;
	if (MIN < MAX) {
		for (i = (MAX - 1); i > MIN; i--) {
			A[k] = N[i];
			k++;
		}
	    k = 0;
		for (i = (MIN + 1); i < MAX; i++) {
			N[i] = A[k];
			k++;
		}
	} else {
		for (i = (MIN - 1); i > MAX; i--) {
			A[k] = N[i];
			k++;
		}
		k = 0;
		for (i = (MAX + 1); i < MIN; i++) {
			N[i] = A[k];
			k++;
		}
	}
	for (i = 0; i < n; i++)
		cout << N[i] << " ";
	return 0;
}