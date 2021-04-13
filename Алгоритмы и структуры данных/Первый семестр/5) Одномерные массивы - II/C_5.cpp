#include <iostream>
#include <algorithm>

using namespace std;

long long N[100000];
int i, n, schet, schet_m;

int main() {

	cin >> n;
	schet = 1;
	schet_m = 1;
	for (i = 0; i < n; i++)
		cin >> N[i];
	for (i = 1; i < n; i++) {
		if (N[i] == N[i - 1]) {
			schet++;
			if (i == n - 1 && schet > schet_m)
				schet_m = schet;
		}
		else {
			if (schet > schet_m)
				schet_m = schet;
			schet = 1;
		}
	}
	cout << schet_m << endl;
	return 0;
}