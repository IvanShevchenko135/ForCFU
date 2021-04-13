#include <iostream>

using namespace std;

int main() {

    int N[100];
    int i, n;
    
    cin >> n; 
    for (i = 0; i < n; i++)
        cin >> N[i];
    for (i = 0; i < n; i++){
        if (N[i] % 2 != 0)
            cout << N[i] << " ";
    }
    cout << endl;
    for (i = 0; i < n; i++){
        if (N[i] % 2 == 0)
            cout << N[i] << " ";
    } 
    cout << endl;
    return 0;
}