#include <iostream>

using namespace std;

int main() {

    int N[100];
    int i, n, x;
    
    cin >> n; 
    for (i = 0; i < n; i++)
        cin >> N[i];
    x = N[n - 1];
    for (i = n - 1; i >= 0; i--)
        N[i] = N[i - 1];
    N[0] = x;
    for (i = 0; i < n; i++)
        cout << N[i] << " ";
    return 0;
}