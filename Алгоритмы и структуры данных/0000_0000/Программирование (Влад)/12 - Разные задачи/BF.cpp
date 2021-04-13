#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int a, b, c, n, d, t;

int factorial (int x) 
{ 
 if( x == 0 ) return 1;
 return x * factorial (x - 1);
}

int main() {
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        printf("Good luck for John and Brus");
        for (int i = 0; i < n; i++) printf("!");
        printf("\n");
    }
    return 0;
}