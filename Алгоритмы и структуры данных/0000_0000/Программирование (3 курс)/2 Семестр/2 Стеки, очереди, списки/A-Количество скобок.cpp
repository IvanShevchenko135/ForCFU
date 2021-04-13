#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include <iomanip>
#include <cstring>

using namespace std;

int main() {
	char a[100];
	int b[100];
	int i = 0;
	int j = 0;
	memset(b, 0, sizeof(b));
	while (scanf("%c", &a[i++]) != EOF) {
		if (a[i - 1] == '(') {
			b[j++] = 1;
		}
		else if (a[i - 1] == ')') {
			if(j != 0 && b[j - 1] == 1){
				b[--j]--;
			}else{
				b[j++] = -1;
			}
			
		}
	}
	for(i = 0, j = 0; i < 100; i++){
		if(abs(b[i]) == 1){
			j++;
		}
	}
	printf("%d", j);
	
	return 0;
}

/*
Ђ«адана строка, состо€ща€ из скобок. Ќеобходимо превратить ее в правильную строку, вставл€€ как можно меньшее количество скобок в любую позицию (удалить или изменить существующие скобки нельз€).
*/