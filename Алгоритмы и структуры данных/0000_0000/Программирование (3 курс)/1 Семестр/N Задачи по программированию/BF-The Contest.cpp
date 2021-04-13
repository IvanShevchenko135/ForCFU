#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdio.h>


using namespace std;


int main() {
    int T, N;
	scanf("%d", &T);
    while(T--)
    {
		scanf("%d", &N);
        printf("Good luck for John and Brus");
		for(int i = 0; i < N; i++){
			printf("!");
		}
		printf("\n");
	}
    return 0;
}
/*
John and Brus are at home after the party. Now they have to take some rest before tomorrow’s contest.

John: Brus, I have a terrible headache.
Brus: Weird, I have no idea what the reason is!

Let’s wish them a good luck for tomorrow. You have to print a phrase “Good luck for John and Brus” (quotes for clarity) followed by N exclamation marks ‘!’.
*/