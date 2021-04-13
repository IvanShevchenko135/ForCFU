#include <iostream>
#include <cstdlib>
#include <stdio.h> 


using namespace std;


int main(int argc, char** argv) {
    long long a;
    long long b;
    scanf("%lld %lld", &a, &b);
    printf("%lld\n%lld\n%lld\n%.3lf", a+b, a-b, a*b, (double)a/(double)b);
    return 0;
}