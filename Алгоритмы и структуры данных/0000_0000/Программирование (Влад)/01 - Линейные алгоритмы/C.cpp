#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int r1, r2;
double s;

int main() {
	scanf("%d%d", &r1, &r2);
	s = acos(-1)*(max(r1, r2)*max(r1, r2) - min(r1, r2) * min(r1, r2));
	printf("%.6lf", s);
	return 0;
}