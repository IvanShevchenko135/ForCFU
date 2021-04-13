#include <iostream>
#include <stack>
using namespace std;

int main() {

	int n, prev[200000];
	stack <int> st;

	cin >> n;
	prev[1] = -1;
	for (int i = 2; i < n + 1; i++) cin >> prev[i];
	for (int i = n; i != -1; i = prev[i]) st.push(i);
	while (!st.empty()) {
		cout << st.top() << ' ';
		st.pop();
	}
	cout << endl;
	return 0;
}