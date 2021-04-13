#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

string a1, b1;
int n, m, s[1000][1000], p[1001], minx = 1e9 + 1;

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) scanf("%d", &s[i][j]);
    }
    for (int i = 0; i < n; i++) {
        minx = 1e9 + 1;
        for (int j = 0; j < m; j++) minx = min(minx, s[i][j]);
        printf("%d\n", minx);
    }
    return 0;
}