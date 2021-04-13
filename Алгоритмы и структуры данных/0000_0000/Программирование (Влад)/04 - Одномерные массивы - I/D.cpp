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
    cout << s[n-1];
    for (int i = 0; i < n-1; i++) cout << ' ' << s[i];
    return 0;
}