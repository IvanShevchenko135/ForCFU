#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int a, b, c, t;

int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c;
        if (a == b && b == c) printf("1\n");
        else if (a == b || b == c || a == c) printf("2\n");
        else printf("3\n");
    }
    return 0;
}