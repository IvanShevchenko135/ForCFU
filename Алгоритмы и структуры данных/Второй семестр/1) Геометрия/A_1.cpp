#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int r, count = 0;
	double h;

	cin >> r;
	for (int i = 1; i < r + 1; i++) {
		for (int j = 1; j < r + 1; j++) {
			h = sqrt(i * i + j * j);
			if (r >= h) count++;
		}
	}
	count *= 4;
	cout << count << endl;
	//system("pause");
	return 0;
}