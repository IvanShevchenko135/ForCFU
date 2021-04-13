#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>

#define big 1000000000

using namespace std;

int p[1000], n;

bool NextPermutation(int *p, int n) {
	bool chk = true;
	for (int i = 1; i < n; i++) {
		if (p[i - 1] - p[i] != 1) chk = false;
	}
	if (chk) return false;
	int ptr = n - 1;
	while (p[ptr - 1] > p[ptr]) ptr--;
	ptr--;
	int next = ptr + 1;
	for (int i = ptr; i < n; i++) {
		if (p[i] > p[ptr] && p[i] < p[next]) next = i;
	}
	swap(p[ptr], p[next]);
	for (int i = ptr + 1; i < n - 1; i++) {
		for (int j = ptr+1; j < n-1; j++) {
			if (p[j] > p[j + 1]) swap(p[j], p[j + 1]);
		}
	}
	return true;
}
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &p[i]);
	if (!NextPermutation(p, n)) printf("Not exist");
	else {
		for (int i = 0; i < n; i++) printf("%d ", p[i]);
	}
	//system("pause");
	return 0;
}