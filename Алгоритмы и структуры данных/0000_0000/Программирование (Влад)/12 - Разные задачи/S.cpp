#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

string a1, b1;
int n, m, s[1000], t;

int main() {
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        for (int j = 0; j < n; j++) scanf("%d", &s[j]);
        printf("%d", s[n-1]);
        for (int j = n-2; j >= 0; j--) printf(" %d", s[j]);
        printf("\n");
    }
    return 0;
}