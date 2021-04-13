#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

double a, b;

int main() {
    cin >> a >> b;
    printf("%.3lf %.3lf", double(a*a+b*b)/2, double(abs(a)+abs(b))/2);
    return 0;
}