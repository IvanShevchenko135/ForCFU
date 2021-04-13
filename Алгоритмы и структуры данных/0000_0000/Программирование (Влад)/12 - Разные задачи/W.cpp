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
        scanf("%d", &n);
        for (int j = 0; j < n; j++) scanf("%d", &s[j]);
        sort(s, s+n);
        printf("%d", s[0]);
        for (int j = 1; j < n; j++) printf(" %d", s[j]);
        printf("\n");
       
    }
    return 0;
}