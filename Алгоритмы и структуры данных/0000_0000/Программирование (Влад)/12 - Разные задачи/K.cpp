#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int a, b, t;
double c, p, s;

int main() {
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &a, &b);
        c = sqrt(a*a+b*b);
        p = a + b + c;
        s = 0.5 * a * b;
        printf("%.3lf %.3lf\n", p, s);
    }
    return 0;
}