#include <iostream>

using namespace std;

int main() {

	int N, sum;
	
	cin >> N;
	sum = N % 10;
	N = N / 10;
	sum = sum + (N % 10);
	N = N / 10;
	sum = sum + (N % 10);
	N = N / 10;
	sum = sum + (N % 10);
	cout << sum << endl;
	return(0);
}