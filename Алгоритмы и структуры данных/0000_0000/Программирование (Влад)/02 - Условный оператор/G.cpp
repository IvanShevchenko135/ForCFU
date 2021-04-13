#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

int a, b, c, d;

int main() {
    scanf("%d %d %d", &a, &b, &c);
    d = b*b - 4*a*c;
    if (d < 0) printf("No roots");
    else if (d == 0) {
        printf("%.8lf", -b/((double)a*2));
    }
    else printf("%.8lf %.8lf", min((-b+sqrt(d))/((double)a*2), (-b-sqrt(d))/((double)a*2)), max((-b+sqrt(d))/((double)a*2), (-b-sqrt(d))/((double)a*2)));
    return 0;
}