#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

long long a, b, t;

int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        cout << b << ' ' << a << endl;
    }
    return 0;
}