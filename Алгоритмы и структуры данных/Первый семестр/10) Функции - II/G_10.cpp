#include <iostream>
using namespace std;

long long Palindrome(long long N) {

	int number[13], start, l, r, count = 0;
	long long ans;
	bool check = 1;

	N++;
	while (check) {
		count++;
		r = 12;
		ans = 0;
		check = 0;
		for (int i = 12; N > 0; i--) {
			number[i] = N % 10;
			N /= 10;
			start = i;
		}
		l = start;
		while (l < r) {
			if (number[l] != number[r]) {
				if (number[l] < number[r] && count != 2)
					check = 1;
				number[r] = number[l];
			}
			l++;
			r--;
		}
		if (check)
			number[r]++;
		for (int i = 12; i >= 0; i--) {
			if (number[i] > 9) {
				check = 1;
				if (i == start) {
					start--;
					number[start] = 0;
				}
				number[i - 1] = number[i - 1] + number[i] / 10;
				number[i] = number[i] % 10;
			}
		}
		for (int i = start; i < 13; i++)
			ans = ans * 10 + number[i];
		if (check)
			N = ans;
	}
	return ans;
}

int main() {

	long long N;

	cin >> N;
	cout << Palindrome(N) << endl;
	//system("pause");
	return 0;
}