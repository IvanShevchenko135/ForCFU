#include <iostream>
using namespace std;

int i = 0;

void NumberOut(int N) {
	
	cout << ++i << " ";
	if (N > 1)
		NumberOut(--N);
	else
		return;
}
int main() {
	
	int N;

	cin >> N;
	NumberOut(N);
	//system("pause");
	return 0;
}