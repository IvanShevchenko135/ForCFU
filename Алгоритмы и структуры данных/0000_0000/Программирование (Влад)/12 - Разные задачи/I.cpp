#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int sum, pr, t;
long long n;

int main() {
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        sum = 0; pr = 1;
        scanf("%lld", &n);
        while (n > 0) {
            sum += n % 10;
            pr *= n % 10;
            n /= 10;
        }
        printf("%.3lf\n", pr/(double)sum);
    }
    return 0;
}