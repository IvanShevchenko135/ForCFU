#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int n, s[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i <n; i+=2) cout << s[i] << ' ';
    cout << endl;
    for (int i = 1; i <n; i+=2) cout << s[i] << ' ';
    return 0;
}