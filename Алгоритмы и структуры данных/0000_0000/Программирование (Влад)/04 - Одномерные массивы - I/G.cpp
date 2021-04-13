#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int n, s[100], a = 1e9, b = -1, c, d;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < n; i++) {
        if (s[i] < a) {
            a = s[i];
            c = i;
        }
    }
    for (int i = 0; i < n; i++) {
        if (s[i] > b) {
            b = s[i];
            d = i;
        }
    }
    for (int i = 0; i <= min(c,d); i++) cout << s[i] << ' ';
    for (int i = max(c,d) - 1; i > min(c,d); i--) cout << s[i] << ' ';
    for (int i = max(c,d); i < n; i++) cout << s[i] << ' ';
    return 0;
}