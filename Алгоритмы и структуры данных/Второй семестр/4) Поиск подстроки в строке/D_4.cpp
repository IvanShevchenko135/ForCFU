#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

bool check = 0;
int n, m[1000000];
char l, s[1000000];

int main() {
	scanf("%d", &n);
	scanf("%s", s);
	scanf("%c", &l);
	scanf("%c", &l);
	for (int i = 1; i < n; i++) {
		int j = m[i - 1];
		while (true) {
			if (s[i] == s[j]) {
				m[i] = j + 1;
				break;
			}
			if (j == 0) break;
			else  j = m[j - 1];
		}
	}
	int i = 0, j = 0;
	while (true) {
		while (i != 0 && s[i] != l) i = m[i - 1];
		if (s[i] == l) {
			if (i == n - 1) {
				printf("%d\n", j - n + 1);
				check = 1;
				i = m[i];
			}
			else i++;
			if (scanf("%c", &l) == EOF) break;
			else j++;
		}
		else {
			if (scanf("%c", &l) == EOF) break;
			else j++;
		}
	}
	if (!check) printf("%d\n", -1);
	return 0;
}