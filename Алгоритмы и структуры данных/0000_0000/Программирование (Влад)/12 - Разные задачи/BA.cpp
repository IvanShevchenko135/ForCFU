#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	int h, m, t;
	scanf("%d", &t);
	while (t--) {
		scanf("%d:%d", &h, &m);
		if (h >= 12) h -= 12;
		int rev_deg = 720 - (h * 60 + m);
		h = rev_deg / 60;
		m = rev_deg % 60;
		if (h == 0) h = 12;
		printf("%02d:%02d\n", h, m);
	}
	//system("pause");
	return 0;
}