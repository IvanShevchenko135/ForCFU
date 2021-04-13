#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

long long n, temp, sum;

int main() {
    scanf("%lld", &n);
    temp = n;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    n % sum == 0 ? printf("YES"): printf("NO");
    return 0;
}