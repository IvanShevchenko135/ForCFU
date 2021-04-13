#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int n, s[100], c;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> s[i];
    c = s[1] - s[0];
    for (int i = 2; i < n; i++) {
        if (s[i] - s[i-1] != c) {
            cout << 0;
            return 0;
        }
    }
    cout << c;
    return 0;
}