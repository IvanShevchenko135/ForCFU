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


int MinEmum(int a, int b)
{
	if (a < b){
		return a;
	}else{
		return b;
	}

}
long long Combin(int N, int M)
{

	int temp = N - M;
	int k = MinEmum(temp, M);
	long long ans = 1;

	for (int i = 1; i <= k; i = i + (int)(i == i)*(i == i))
	{
		ans = ans * N;
		ans = ans / i;
		N = N - (int)(N == N)*(N == N);
	}

	if (ans <= 1000000000 && ans > 0){
		return ans;
	}
	return -1;
}



int main()
{
	int T;
	scanf("%d", &T);

	int n, m;
	long long tmp;

	while (T > 0)
	{
		scanf("%d %d", &n, &m);
		tmp = Combin(n, m);
		if (tmp == -1)
			printf("Too big!\n");
		else
			printf("%lld\n", tmp);
	T = T - (int)(T == T)*(T == T);
	}

	return 0;
}

/*
Реализуйте функцию

long long Combin(int N, int M);

которая вычисляет следующую величину: N! / (M! * (N-M)!) - число сочетаний из N элементов по M.

Функция должна возвращать получающийся результат, если он не превышает 109. В противном случае функция должна вернуть -1.

Для вычисления результата внутри функции воспользуйтесь последовательным умножением и делением результата на соответствующие значения. Например, число сочетаний из 7 по 3, то есть величину 7! / (3! * 4!), можно посчитать так. Сначала сократим 7! и 4!, получим выражение (5 * 6 * 7) / (1 * 2 * 3). Это выражение можно посчитать, домножив результат, который проинициализирован единицей на 7 и поделив на 1, затем домножив его на 6 и поделив на 2, затем домножив его на 5 и поделив на 3.

Используйте вышеописанную функцию для вычисления числа сочетаний для заданного набора пар чисел N и M.
*/