#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

int s[3];

int main() {
    scanf("%d %d %d", &s[0], &s[1], &s[2]);
    sort(s, s+3);
    printf("%.6lf", (double)(s[2]*s[2]-s[0]*s[0])/(s[1]*s[1]-s[0]*s[0]));  
    return 0;
}