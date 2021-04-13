#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

string a1, b1;
int n, m, s[1000][1000], p[1001], maxx = -1, tmp, num;

int main() {
    scanf("%d %d", &n, &m);
    if (m % 2 == 1 || n % 2 == 0) printf("yes");
    else printf("no");
    return 0;
}