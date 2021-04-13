#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

long double func(int n) {
    long double ans = 1;
    int k1 = n/2;
    int k2 = 1;
    int k3 = 1;
    while (k1 <= n-2) {
        ans *= k1;
        k1++;
        while (ans > 1 && k2 <= n/2 - 1) {ans /= k2; k2++;}
        while (ans > 1 && k3 <= n - 2) {ans /= 2; k3++;}
    }
    while (k2 <= n/2 - 1) {ans /= k2; k2++;}
    while (k3 <= n - 2) {ans /= 2; k3++;}
    return ans;
}

int main() {
    int n; cin >> n;
    cout << fixed << setprecision(4) << func(n) << endl;
    return 0;
}