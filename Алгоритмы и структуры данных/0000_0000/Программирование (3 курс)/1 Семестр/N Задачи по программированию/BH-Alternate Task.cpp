#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <cstring> 
#include <string> 
using namespace std;

int fract[100010];

int main() {
	memset(fract, -1, sizeof(fract));
	fract[0] = 0;
	int temp = 0;
	for (int i = 1; i < 2018; i++) {
		for (int j = 1; j <= i; j++) {
			if (i%j == 0) {
				temp += j;
			}
		}
		if(fract[temp] < i)
		fract[temp] = i;
		temp = 0;
	}
	int count = 1;
	while (true) {
		scanf("%d", &temp);
		if (!temp) break;
		printf("Case %d: %d\n",count++, fract[temp]);
	}
	

	
	return 0;
}

/*
Little Hasan loves to play number games with his friends. One day they were playing a game where one of them will speak out a positive number and the others have to tell the sum of its factors. The first one to say it correctly wins. After a while they got bored and wanted to try out a different game. Hassan then suggested about trying the reverse. That is, given a positive number S, they have to find a number whose factors add up to S. Realizing that this task is tougher than the original task, Hasan came to you for help. Luckily Hasan owns a portable programmable device and you have decided to burn a program to this device. Given the value of S as input to the program, it will output a number whose sum of factors equal to S.
*/