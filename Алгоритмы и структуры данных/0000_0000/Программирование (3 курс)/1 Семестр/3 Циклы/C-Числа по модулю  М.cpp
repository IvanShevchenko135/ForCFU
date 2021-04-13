#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;


int main()
{
	long long a, N, M, K, summ = 0, j = 0;
	int nod[100];
	scanf("%lld%lld%lld", &N, &M, &K);
	for (int i = 0; i < N; i++) {
		scanf("%lld", &a);
		if (a%M == K){
			nod[j++] = a;
			summ += a;
		}
	}
	for (int i = 0; i < j; i++) {
		printf("%d\n", nod[i]);
	}
	printf("%lld", summ);
	return 0;
}