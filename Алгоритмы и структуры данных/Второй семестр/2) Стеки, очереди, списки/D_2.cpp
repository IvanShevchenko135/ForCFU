#include <iostream>
#include <string>
#include <cmath>
using namespace std;

long long ans[10000];

int main() {

	string s, pol;
	char st_op[10000];
	int n, x, y;

	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '-' && (i == 0 || s[i - 1] == '(')) s[i] = '#';
	}
	cin >> n;
	while (n--) {
		cin >> x >> y;
		int ptr = 0;
		pol = "";
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '(') {
				st_op[ptr] = s[i];
				ptr++;
			}
			else if (s[i] == '#') {
				st_op[ptr] = s[i];
				ptr++;
			}
			else if (s[i] == '^') {
				if (st_op[ptr - 1] == '#') {
					ptr--;
					while (ptr != 0 && st_op[ptr - 1] != '(') {
						pol.push_back(st_op[ptr]);
						ptr--;
					}
					pol.push_back(st_op[ptr]);
				}
				st_op[ptr] = s[i];
				ptr++;
			}
			else if (s[i] == '/') {
				if (st_op[ptr - 1] == '#' || st_op[ptr - 1] == '^') {
					ptr--;
					while (ptr != 0 && st_op[ptr - 1] != '(') {
						pol.push_back(st_op[ptr]);
						ptr--;
					}
					pol.push_back(st_op[ptr]);
				}
				st_op[ptr] = s[i];
				ptr++;
			}
			else if (s[i] == '*') {
				if (st_op[ptr - 1] == '#' || st_op[ptr - 1] == '^') {
					ptr--;
					while (ptr != 0 && st_op[ptr - 1] != '(') {
						pol.push_back(st_op[ptr]);
						ptr--;
					}
					pol.push_back(st_op[ptr]);
				}
				st_op[ptr] = s[i];
				ptr++;
			}
			else if (s[i] == '-') {
				if (st_op[ptr - 1] == '#' || st_op[ptr - 1] == '^' || st_op[ptr - 1] == '*' || st_op[ptr - 1] == '/') {
					ptr--;
					while (ptr != 0 && st_op[ptr - 1] != '(') {
						pol.push_back(st_op[ptr]);
						ptr--;
					}
					pol.push_back(st_op[ptr]);
				}
				st_op[ptr] = s[i];
				ptr++;
			}
			else if (s[i] == '+') {
				if (st_op[ptr - 1] == '#' || st_op[ptr - 1] == '^' || st_op[ptr - 1] == '*' || st_op[ptr - 1] == '/' || st_op[ptr - 1] == '-') {
					ptr--;
					while (ptr != 0 && st_op[ptr - 1] != '(') {
						pol.push_back(st_op[ptr]);
						ptr--;
					}
					pol.push_back(st_op[ptr]);
				}
				st_op[ptr] = s[i];
				ptr++;
			}
			else if (s[i] == ')') {
				ptr--;
				while (st_op[ptr] != '(') {
					pol.push_back(st_op[ptr]);
					ptr--;
				}
			}
			else if (s[i] == 'x' || s[i] == 'y') pol.push_back(s[i]);
			else {
				while (s[i] >= '0' && s[i] <= '9') {
					pol.push_back(s[i]);
					i++;
				}
				i--;
				pol.push_back(',');
			}
		}
		ptr--;
		while (ptr >= 0) {
			pol.push_back(st_op[ptr]);
			ptr--;
		}
		//cout << pol << endl;
		ptr = 0;
		for (int i = 0; i < pol.size(); i++) {
			if (pol[i] == 'x') {
				ans[ptr] = x;
				ptr++;
			}
			else if (pol[i] == 'y') {
				ans[ptr] = y;
				ptr++;
			}
			else if (pol[i] == '#') ans[ptr - 1] *= -1;
			else if (pol[i] == '^') {
				ans[ptr - 2] = pow(ans[ptr - 2], ans[ptr - 1]);
				ptr--;
			}
			else if (pol[i] == '*') {
				ans[ptr - 2] *= ans[ptr - 1];
				ptr--;
			}
			else if (pol[i] == '/') {
				ans[ptr - 2] = (long long)(ans[ptr - 2] / ans[ptr - 1]);
				ptr--;
			}
			else if (pol[i] == '+') {
				ans[ptr - 2] += ans[ptr - 1];
				ptr--;
			}
			else if (pol[i] == '-') {
				ans[ptr - 2] -= ans[ptr - 1];
				ptr--;
			}
			else {
				ans[ptr] = 0;
				while (pol[i] != ',') {
					ans[ptr] *= 10;
					ans[ptr] += int(pol[i] - '0');
					i++;
				}
				ptr++;
			}
		}
		cout << ans[0] << endl;
	}
	//system("pause");
	return 0;
}