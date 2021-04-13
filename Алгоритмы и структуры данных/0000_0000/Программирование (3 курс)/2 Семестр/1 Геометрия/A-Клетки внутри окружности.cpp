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
	int a, iter = 0;
	scanf("%d", &a);

	
	for (int y = 1; ; y++) {
		if (sqrt(y*y + 1) > a) {
			break;
		}
		for (int x = 1; ; x++) {
			if (sqrt(y*y + x*x) > a) {
				break;
			}
			else {
				iter++;
			}		
		}
	}
	
	printf("%d\n", iter * 4);
}
/*
Ќа листке бумаги в клеточку нарисована окружность радиусом R и центром на пересечении линий клеток. С сколько полных клеточек содержитсЯ в данной окружности?
*/