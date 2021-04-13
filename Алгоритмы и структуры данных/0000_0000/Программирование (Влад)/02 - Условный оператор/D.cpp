#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

long long a, b, c;

int main() {
    scanf("%lld %lld %lld", &a, &b, &c);
    a > b && b > c ? printf("%lld %lld %lld", 2*a, 2*b, 2*c): printf("%lld %lld %lld", -a, -b, -c);
    return 0;
}