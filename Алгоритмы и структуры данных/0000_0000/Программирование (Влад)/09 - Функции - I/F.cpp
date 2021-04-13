#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

long long fast_pow(long long a, long long n, long long  m){
    long long ans = 1;
    while (n > 0) {
        if ((n & 1) != 0) ans = (ans % m * a % m) % m;
        a = (a % m * a % m) % m;
        n >>= 1;
    }
    return ans;
}

int main() {
    long long a, n, m, ans;
    while (cin >> a >> n >> m) {
        cout << fast_pow(a, n, m) << endl;
    }
    
    return 0;
}