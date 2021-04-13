#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n, k;
    long long s[200];
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < k && i < n - 1; i++) {
        long long min = i;
        for (int j = 0; j < n-1; j++) {
            if (s[j] > s[j+1]) {
                long long tmp = s[j];
                s[j] = s[j+1];
                s[j+1] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++) cout << s[i] << ' ';
    return 0;
}