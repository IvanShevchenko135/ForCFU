#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <fstream>

using namespace std;

int n, r;

int main() {
    for (int i = 1; true; i++) {
        cin >> r >> n;
        if (r == 0 && n == 0) return 0;
        printf("Case %d: ", i);
        if (n >= r) {printf("0\n"); continue;}
        bool chk = false;
        for (int j = 1; j <= 26; j++) {
            if (n + n*j >= r) {
                chk = true;
                printf("%d\n", j);
                break;
            }
        }
        if (!chk) printf("impossible\n");
    }
    return 0;
}