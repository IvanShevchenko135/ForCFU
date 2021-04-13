#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int t, a, n;
long long sum;

int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> n;
        sum = 0;
        for (int j = 0; j <= n; j++) sum += pow(-1, j)*a*j;
        sum++;
        printf("%lld\n", sum);
    }
    return 0;
}