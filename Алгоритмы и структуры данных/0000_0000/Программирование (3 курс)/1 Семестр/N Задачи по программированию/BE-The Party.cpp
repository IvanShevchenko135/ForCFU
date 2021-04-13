#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdio.h>


using namespace std;



int main() {
    int T, N, b;
	scanf("%d", &T);
    while(T--)
    {
		scanf("%d", &N);
        b=1;
        while(N){
			b *= N--;
		}
		printf("%d\n", b);
   
    }
   
    return 0;
}

/*
Finally, John and Brus are at the party and John is drunk already.

John: Brus, why there are two of you? Is it your brother?
Brus: No it’s a squirrel, my friend!

John noticed that there are N boys and N girls at the party. Thus, it’s easy to make N pairs of them. Note that John is very orthodox person, that’s why each pair must consist of one boy and one girl. You have to calculate the number of ways to pair all young ladies and gentlemen at the party.
*/