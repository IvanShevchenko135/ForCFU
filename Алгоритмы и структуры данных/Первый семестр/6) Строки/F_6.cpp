#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int N;
string S[1001];

int main(){ 
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> S[i];
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - 1; j++) {
			if (S[j] > S[j + 1])
				swap(S[j], S[j + 1]);
		}
	}
	for (int i = 0; i < N; i++)
	cout << S[i] << endl;
	//system("pause");
	return 0;
}