#include <iostream>
#include <iomanip> 
#include <cmath>

using namespace std;

long double func(long double x) {
	long double ans;
	ans = sin(x) + sqrt(log(3 * x)/log(4)) + ceil(3 * exp(x));
	return ans;
}

int main(){
	long double x;
	long double ans;
	while (cin >> x) {
		ans = func(x);
		cout << fixed << setprecision(6) << ans << endl;
	}
	//system("pause");
	return 0;
}