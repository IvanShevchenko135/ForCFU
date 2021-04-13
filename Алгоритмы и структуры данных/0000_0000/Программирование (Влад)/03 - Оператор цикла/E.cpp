#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int a, n, m;
unsigned long long res = 1;

int main() {
	scanf("%d %d %d", &a, &n, &m);
	for (int i = n; i > 0; i--) res = (res*a + 1) % m;
	printf("%d", res);
	return 0;
}