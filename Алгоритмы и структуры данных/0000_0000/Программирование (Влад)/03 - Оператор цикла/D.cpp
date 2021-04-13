#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

unsigned long long a, t, res = 1;


int main() {
    scanf("%lld", &a);
    long double b = a;
    while (abs(b - 0.5 * (b + a / b)) > pow(10, -9)) {
        b = 0.5 * (b + a / b);
        res++;
    }
    cout << fixed << setprecision(9) << b << endl << setprecision(0) << res;
    return 0;
}