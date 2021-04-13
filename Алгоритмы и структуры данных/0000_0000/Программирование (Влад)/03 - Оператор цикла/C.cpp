#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

long long n, m, k, a, sum;



int main() {
    scanf("%lld %lld %lld", &n, &m, &k);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a);
        if (a % m == k) {
            sum += a;
            printf("%lld\n", a);
        }
    }
    printf("%lld", sum);
    return 0