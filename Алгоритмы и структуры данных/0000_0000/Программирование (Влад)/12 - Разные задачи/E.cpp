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
        cin >> n >> k;
        for (int j = 0; j < k; j++) ans *= n;
        cout << ans << endl;
        ans = 1;
    }
    return 0;
}