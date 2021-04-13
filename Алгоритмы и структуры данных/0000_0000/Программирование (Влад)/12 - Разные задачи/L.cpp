#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int a, b, c, d, t;

int main() {
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (a != b && a != c) printf("1\n");
        else if (b != c && b != d) printf("2\n");
        else if (c != b && c != d) printf("3\n");
        else printf("4\n");
    }
    return 0;
}