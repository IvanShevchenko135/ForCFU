#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

long long s[50][50];

long long binom(int m, int n) {
    if (s[m][n] == 0) {
    	s[m][n] = 1;
    	if (m == 1) {
    		s[m][n] = n;
    	} else if (m == 2) {
    		s[m][n] = n*(n+1)/2;
    	} else if (m != 0) {
    		for (int i = 2; i <= n; i++) s[m][n] += binom(m-1, i);
    	}
    }
    return s[m][n];
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << binom(n-m, m+1);
    return 0;
}