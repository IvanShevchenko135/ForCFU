#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

int a, b, c;

int main() {
    scanf("%d %d %d", &a, &b, &c);
    a > 0 ? printf("%d ", a*a*a): printf("%d ", a*a);
    b > 0 ? printf("%d ", b*b*b): printf("%d ", b*b);
    c > 0 ? printf("%d ", c*c*c): printf("%d ", c*c);
    return 0;
}