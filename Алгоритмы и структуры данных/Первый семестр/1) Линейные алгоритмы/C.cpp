#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	int a, b, R1, R2;
	double S;

	cin >> a >> b;
	if (a > b)
	{
		R1 = b;
		R2 = a;
	}
	else
	{
		R1 = a;
		R2 = b;
	}
	S = (double)acos(-1)*(pow(R2, 2) - pow(R1, 2));
	cout << fixed << setprecision(6) << S << endl;
	return(0);
}