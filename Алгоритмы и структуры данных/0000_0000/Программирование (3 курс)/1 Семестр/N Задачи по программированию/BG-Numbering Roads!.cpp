#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <cstring> 
#include <string> 
#include <stdlib.h>
using namespace std;


int main() {
	int i = 0;
	
	while(true){
		int a, b;
		double c;
		scanf("%d%d", &a, &b);
		
		if(a == 0 && b == 0){
			return 0;
		}
		i++;
		c = ceil((double)a / b) - 1;
		if(c > 26){
			printf("Case %ld: impossible\n", i);
		}else if(c == -1){
			printf("Case %ld: 0\n", i);
		}else{
			printf("Case %ld: %0.lf\n", i, c);
		}

	
	}
}

/*
Numbering Roads!
In my country, streets don’t have names, each of them are just given a number as name. These numbers are supposed to be unique but that is not always the case. The local government allocates some integers to name the roads and in many case the number of integers allocated is less that the total number of roads. In that case to make road names unique some single character suffixes are used. So roads are named as 1, 2, 3, 1A, 2B, 3C etc. Of course the number of suffixes is also always limited to 26 (A, B, …, Z). For example if there are 4 roads and 2 different integers are allocated for naming then some possible assignments of names can be:

1, 2, 1A, 2B
1, 2, 1A, 2C
3, 4, 3A, 4A
1, 2, 1B, 1C
Given the number of roads (R) and the numbers of integers allocated for naming (N), your job is to determine minimum how many different suffixes will be required (of all possible namings) to name the streets assuming that no two streets can have same names.
*/