#include <iostream>

using namespace std;

int main() {

    int N[100];
    int i, n, x;
    
    cin >> n; 
    for (i = 0; i < n; i++)
        cin >> N[i];
    x = N[1] - N[0];
    for (i = 1; i < n; i++)
        if (N[i] - N[i - 1] != x){
            cout << 0 << endl;
            return 0;
        }
    cout << x << endl;
    return 0;
}