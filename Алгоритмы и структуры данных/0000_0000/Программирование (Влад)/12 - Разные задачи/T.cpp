#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

string a1, b1;
int n, m, s[1000], t, mins, maxs, a, b;

int main() {
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        mins = 1001; maxs = -1;
        scanf("%d", &n);
        for (int j = 0; j < n; j++) scanf("%d", &s[j]);
        for (int j = 0; j < n; j++) {
            if (s[j] < mins) {
                mins = s[j];
                a = j;
            }
            if (s[j] > maxs) {
                maxs = s[j];
                b = j;
            }
        }
        s[a] = maxs;
        s[b] = mins;
        printf("%d", s[0]);
        for (int j = 1; j < n; j++) printf(" %d", s[j]);
        printf("\n");
    }
    return 0;
}