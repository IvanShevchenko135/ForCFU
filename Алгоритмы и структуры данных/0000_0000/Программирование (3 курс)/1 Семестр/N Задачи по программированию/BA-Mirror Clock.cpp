#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <cstring> 
#include <string> 
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while(T--){
		int h, m;
		scanf("%d:%d", &h, &m);
		printf("%02d:%02d\n", (h == 12) ? (12  - (m != 0)) : (12 - h - (m != 0)) == 0 ? 12 : 12 - h - (m != 0), (60 - m) % 60);
	}
	return 0;
}

/*Little Petya has learnt to read wall clock. Very often he loudly announces the time. He has a big clock in his room. There is also a mirror in the opposite side of the clock. Few days ago his mother noticed that sometimes Petya is announcing wrong time. She became worried and after some investigation she found, Petya has no problem in reading time from the clock, the thing is sometimes he reads from the clock in the mirror.

So she told him “Petya, you shouldn’t read time from the clock in the mirror.”

“But why ma?” curious Petya asked.

“Because it gives wrong time” mother replied.

Now Petya looked at the two clocks and realized his mother was telling the truth. Two clocks were not matching. He thought for some time and shouted, “But ma, we can calculate the real time from the clock in the mirror, can’t we?”

Can we? Now you have to answer.
*/