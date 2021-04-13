#include <iostream>

using namespace std;

int main() {

	int T, A, B, R;

	cin >> T;
	while (T > 0)
	{
		cin >> A >> B;
		while (B)
		{
			R = A % B;
			A = B;
			B = R;
		}
		cout << A << endl;
		T--;
	}
	return 0;
}