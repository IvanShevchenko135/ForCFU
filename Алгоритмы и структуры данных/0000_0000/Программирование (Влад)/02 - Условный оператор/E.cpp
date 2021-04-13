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
    scanf("%d %d", &a, &b, &c);
    if (a != 0 && b != 0) printf("0");
    else if (a == 0 && b == 0) printf("1");
    else if (b == 0) printf("2");
    else printf("3");
    return 0;
}