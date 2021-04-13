#include <iostream> 
#include <string>
#include <cmath>
using namespace std;

int N, i;
long long ost = 0, B, M = 1000000007, X = 1;
string S;

int main() {
	cin >> B >> S;
	for (i = 0; i < S.size(); i++) {
		N = S[i] - '0';
		if (S[i] == 'A') N = 10;
		if (S[i] == 'B') N = 11;
		if (S[i] == 'C') N = 12;
		if (S[i] == 'D') N = 13;
		if (S[i] == 'E') N = 14;
		if (S[i] == 'F') N = 15;
		ost = ((N % M) + (B % M * ost % M) % M) % M;
	}
	cout << ost << endl;
	//system("pause");
	return 0;
}