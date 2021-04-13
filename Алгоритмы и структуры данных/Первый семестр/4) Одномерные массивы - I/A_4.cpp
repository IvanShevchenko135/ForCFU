#include <iostream>

using namespace std;

int main() {

    int N[100];
    int i, n;
    
    cin >> n; 
    for (i = 0; i < n; i++)
        cin >> N[i];
    for (i = n - 1; i >= 0; i--)
        cout << N[i] << " ";
    return 0;
}