#include <iostream>
using namespace std;

int T, N, super;
double Arr[51];

int main() {
	cin >> T;
	while (T--) {
		cin >> N;
		Arr[0] = 0;
		super = 1;
		for (int i = 1; i < N + 1; i++) {
			cin >> Arr[i];
			if (Arr[i] <= Arr[i - 1]){
				cout << "No" << endl;
				super = 0;
				break;
			}		
		}
		if (super) {
			for (int i = 1; i < N - 1 && super; i++) {
				for (int j = i + 1; j < N && super; j++) {
					for (int k = j + 1; k < N + 1 && super; k++) {
						if (Arr[i] + Arr[j] > Arr[k])
							break;
						if (Arr[i] + Arr[j] == Arr[k]) {
							cout << "No" << endl;
							super = 0;
						}
					}
				}
			}
		}
		if (super)
			cout << "Yes" << endl;
		
	}
	system("pause");
	return 0;
}