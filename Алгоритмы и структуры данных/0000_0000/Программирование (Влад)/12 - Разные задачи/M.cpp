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
        scanf("%d %d", &a, &b);
        printf("%d\n", b-a+1);
        printf("%d", a);
        for (int i = a+1; i <= b; i++) {
            printf(" %d", i);
        }
        printf("\n");
    }
    return 0;
}