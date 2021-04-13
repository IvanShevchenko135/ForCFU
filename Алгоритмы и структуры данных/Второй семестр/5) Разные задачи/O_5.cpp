#include <iostream>
#include <deque>
using namespace std;

int n;
deque <int> pack;

int main() {
	cin >> n;
	pack.push_back(n);
	for (int i = n - 1; i > 0; i--) {
		pack.push_back(i);
		for (int j = 0; j < i; j++) {
			pack.push_back(pack.front());
			pack.pop_front();
		}
	}
	while(!pack.empty()) {
		cout << pack.back() << " ";
		pack.pop_back();
	}
	cout << endl;
	return 0;
}