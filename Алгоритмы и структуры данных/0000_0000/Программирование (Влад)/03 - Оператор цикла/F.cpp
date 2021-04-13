#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

unsigned long long n, s[80];


int main() {
    cin >> n;
    s[0] = 0;
    s[1] = 0;
    s[2] = 1;
    for (int i = 3; i <= n; i++) s[i] = s[i-3] + s[i-2] + s[i-1];
    cout << s[n];
    return 0;
}