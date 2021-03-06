#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;


long long f, b;
int main()
{
	scanf("%lld%lld", &f, &b);
	if (f % 2 == 1 && b % 2 == 0) {
		printf("no");
	}
	else {
		printf("yes");
	}
	return 0;
}

/*
Den has two four-digit combination locks for protecting his bicycle from thieves. Every evening he arms the bicycle antitheft alarm and fastens the bicycle to a special stand with one of the locks. Den never uses the same lock two evenings in a row. One night a thief tried to open the lock using the code 0000. The alarm went off and the thief hurried away. The next night the thief decided to try the code 0001, then 0002, and so on in ascending order of the number.

Den never changes the codes of his locks. On the night when the thief came for the first time the bicycle was fastened with the first lock.
*/