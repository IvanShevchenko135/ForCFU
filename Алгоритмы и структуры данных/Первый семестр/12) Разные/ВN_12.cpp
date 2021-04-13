#include <iostream>
#include <string>
using namespace std;

int i, j, t;
bool substr = 0, thymine = 0;
string M, N, str;

int main() {
	cin >> t;
	while (t--) {
		cin >> M >> N;
		if (M.size() < N.size()) {
			cout << "N" << endl;
		}
		else {
			thymine = 0;
			for (i = 0; i < M.size(); i++) {
				if (M[i] == 'T') {
					thymine = 1;
					break;
				}
			}
			if (!thymine) {
				cout << "N" << endl;
			}
			else {
				for (i = 0; i <= M.size() - N.size(); i++) {
					str = M.substr(i, N.size());
					substr = 1;
					for (j = 0; j < N.size(); j++) {
						if (str[j] != N[j]) {
							substr = 0;
							break;
						}
					}
					if (substr) {
						cout << "Y" << endl;
						break;
					}
				}
				if (!substr) 
					cout << "N" << endl;
			}
		}
	}
	//system("pause");
	return 0;
}