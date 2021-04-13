#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

long long n, t, s[41];

int main() {
    s[1] = 1;
    for (int i = 2; i <= 40; i++) s[i] = s[i-1] + s[i-2];
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        cout << s[n] << endl;
    }
    return 0;
}