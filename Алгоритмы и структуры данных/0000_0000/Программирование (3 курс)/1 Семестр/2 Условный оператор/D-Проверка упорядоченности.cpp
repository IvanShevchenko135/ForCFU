#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;



int main()
{
    int X[3];
    scanf("%d%d%d", &X[0], &X[1], &X[2]);
    if(X[0] > X[1] && X[1] > X[2]){
        X[0] *= 2; 
        X[1] *= 2;
        X[2] *= 2;
    }else{
        X[0] = -X[0];
        X[1] = -X[1];
        X[2] = -X[2];
    }
    printf("%d %d %d\n", X[0], X[1], X[2]);
    return 0;
}
