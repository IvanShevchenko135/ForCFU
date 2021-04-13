#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdio.h>


using namespace std;


int main() {
    int T,a,b;
	scanf("%d", &T);
    while(T--)
    {
		scanf("%d%d", &a, &b);
		printf("%d\n", a*b);        
    }
   
    return 0;
}

/*
John and Brus are on their way to the party.

John: I’m tired, I can’t follow you anymore.
Brus: Just think about the girls!

There are N city blocks left to go. It takes guys M minutes to walk one city block. You have to find how much time they need to get to the party.
*/