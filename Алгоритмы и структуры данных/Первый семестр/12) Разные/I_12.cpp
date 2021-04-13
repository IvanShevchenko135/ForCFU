#include <iostream>
#include <iomanip>
using namespace std;

int T, N, sum, product; 
double ans;

int main() {
	cin >> T;
	for (T; T > 0; T--) {
		cin >> N;
		sum = 0;
		product = 1;
		ans = 0;
		while (N > 0) {
			sum += (N % 10);
			product *= (N % 10);
			N /= 10;
		}
		ans = product / (double)sum;
		cout << fixed << setprecision(3) << ans << endl;
	}
	//system("pause");
	return 0;
}