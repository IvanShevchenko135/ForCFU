#include <cstdlib>
#include <iostream>


using namespace std;


int main() {
    int T,a,b;
	scanf("%d", &T);
    while(T--)
    {
		scanf("%d%d", &a, &b);
        printf("%d\n", a+b);      
    }
   
    return 0;
}

/*
John and Brus would like to go to the party tonight, but they are not sure if they have enough money.

John: Brus, we are so poor! 
Brus: Yep, I guess I will sell one of my cars or apartments.

John has J hryvnyas and Brus has B hryvnyas. You have to determine how much money guys have in all.
*/