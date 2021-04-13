#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;

int main()
{
    int l, r, n; 
    scanf("%d", &n);

    while(n--){
        scanf("%d%d", &l, &r);
        printf("%d\n", (r/4+r/7-r/28)-((l-1)/4+(l-1)/7-(l-1)/28));
    }
	
    return 0;
}
/*
Вася называет число счастливым, если оно нацело делится на 4 или на 7. Ваша задача состоит в том, чтобы посчитать количество счастливых чисел между числами L и R включительно.
*/