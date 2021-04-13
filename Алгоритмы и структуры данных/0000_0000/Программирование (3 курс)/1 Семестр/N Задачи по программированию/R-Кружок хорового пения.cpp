#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <cstring> 
#include <string> 
using namespace std;

using namespace std; 
int main() { 
	int N, M, temp; 
	while(scanf("%d%d", &N, &M) != EOF) {
		if (M > N) { 
			swap(N, M);
		} 
		while (M  && N % M) { 
			temp = N % M; 
			N = M; 
			M = temp; 
	    } 
		printf(M==1?"YES\n": "NO\n");
	} 
	return 0; 
}
/*
В некотором учебном заведении функционирует кружок хорового пения. Начало кружка всегда происходит единообразно: по сигналу руководителя кружка все N участников становятся в круг и каждый M-й для распевки поёт гамму.

Руководитель кружка заметил, что размять голосовые связки не всегда удаётся всем участникам кружка. По заданным N и M помогите ему определить, или в очередной раз в разминке примут участие все участники хора.
*/