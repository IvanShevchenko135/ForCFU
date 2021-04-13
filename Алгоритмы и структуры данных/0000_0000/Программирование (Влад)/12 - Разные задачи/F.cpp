#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int n, k, t;
long long ans = 1;

int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        if (n / 100 == n % 10) cout << "=" << endl;
        else cout << max(n/100, n%10) << endl;
    }
    return 0;
}