#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <cstring>
using namespace std;

int main()
{
	char a[100001];
	scanf("%s", &a);
	int left = 0, right = strlen(a) - 1, iter = 0, r, index = strlen(a) / 2;

	while (left < right) {
		if (a[left] == a[right]) {
			left++;
			right--;
		} else {
			if (iter == 1) {
				index = r;
				break;
			}
			else {
				r = right;
				index = left;
				left++;
			}
			iter++;
		}
	}
	for (int i = 0; i < strlen(a); i++) {
		if (i != index) {
			printf("%c", a[i]);
		}
	}


	return 0;
}
/*
Даны две строки. Выведите ту их них, которая лексикографически меньше. Строки могут быть одинаковыми, тогда можно вывести любую. Использовать стандартную функцию сравнения строк и класс string нельзя.
*/