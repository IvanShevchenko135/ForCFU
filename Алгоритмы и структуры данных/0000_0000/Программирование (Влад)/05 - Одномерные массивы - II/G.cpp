#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n;
    long long s[200], ind[200], t[200];
    cin >> n;
    for (int i = 0; i < n; i++) {cin >> t[i]; s[i] = t[i];}
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n-1; j++) {
            if (s[j] > s[j+1]) {
                long long tmp = s[j];
                s[j] = s[j+1];
                s[j+1] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (t[j] == s[i]) {ind[i] = j; break;}
        }
    }
    for (int i = 0; i < n; i++) cout << ind[i] << ' ';
    return 0;
}