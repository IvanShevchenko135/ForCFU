#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

string StringXOR(string S, string K) {
    string ans = ""; int ptr = 0;
    for (int i = 0; i < S.length(); i++) {
        if (ptr == K.length()) ptr = 0;
        ans += to_string(S[i] ^ K[ptr]);
        ans += " ";
        ptr++;
    }
    ans.pop_back();
    return ans;
}

int main() {
    string s, k; cin >> s >> k;
    cout << StringXOR(s, k) << endl;
    return 0;
}