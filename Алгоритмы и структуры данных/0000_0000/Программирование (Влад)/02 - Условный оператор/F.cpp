#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

double ax, ay, bx, by, cx, cy, blen, clen;

int main() {
    scanf("%lf %lf %lf %lf %lf %lf", &ax, &ay, &bx, &by, &cx, &cy);
    blen = sqrt(pow(bx-ax, 2) + pow(by-ay, 2));
    clen = sqrt(pow(cx-ax, 2) + pow(cy-ay, 2));
    if (abs(blen-clen) < pow(10, -9)) printf("equal\n%.9lf", blen);
    else if (blen < clen) printf("B\n%.9lf", blen);
    else printf("C\n%.9lf", clen);
    return 0;
}