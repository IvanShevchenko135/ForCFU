#include <iostream>
#include <string>
using namespace std;

string StringXOR(string S, string K) {
	
	string kode, sub;
	if (K.size() < S.size()) {
		while (S.size() != K.size()) {
			sub = K.substr(0, S.size() - K.size());
			K += sub;
		}
	}
	for (int i = 0; i < S.size(); i++) {
		kode = kode + (char)(S[i] ^ K[i]);
	}
	return kode;
}

int main() {

	string S, K, kode;

	cin >> S >> K;
	kode = StringXOR(S, K);
	for (int i = 0; i < S.size(); i++) {
		cout << (int)kode[i]<< " ";
	}
	cout << endl;
	//system("pause");
	return 0;
}