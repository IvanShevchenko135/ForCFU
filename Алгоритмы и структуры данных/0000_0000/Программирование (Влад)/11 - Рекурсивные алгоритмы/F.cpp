#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

int superdigit(int n) {
	if (n < 10) return n;
	int ans = 0;
	while (n > 0) {
		ans += n % 10;
		n /= 10;
	}
	return superdigit(ans);
}
int main() {
	int n; string s;
	cin >> s >> n;
	int ans = 0;
	for (int i = 0; i < s.length(); i++) ans += s[i] - '0';
	n *= superdigit(ans);;
	cout << superdigit(n);
	//system("pause");
	return 0;
}