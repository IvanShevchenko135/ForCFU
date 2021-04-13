#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;



int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    if(x != 0 && y != 0){
        printf("0\n");
    }else if(x == 0 && y == 0){
        printf("1\n");
    }else if(y == 0){   
        printf("2\n");
    }else{    
        printf("3\n");
    }
    return 0;
}