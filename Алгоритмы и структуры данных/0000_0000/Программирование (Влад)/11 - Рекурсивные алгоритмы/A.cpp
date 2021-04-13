#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;
void print_n(int n, int k) {
    if (k <= n) {
        cout << to_string(k) + " ";
        print_n(n, k+1);
    }
}

int main() {
    int n;
    cin >> n;
    print_n(n, 1);
    return 0;
}