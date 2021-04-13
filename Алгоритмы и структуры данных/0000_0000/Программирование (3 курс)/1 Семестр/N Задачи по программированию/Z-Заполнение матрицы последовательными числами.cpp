#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <fstream> 
using namespace std;

int main()
{
    ifstream fin("Z.inp");
    ofstream fout("Z.out");
    int T;
    fin >> T;
   // scanf("%d", &T);

    for (int i = 0; i < T; i++) {
		int N, M, d = 1;
			fin >> N;
			fin >> M;
		//scanf("%d%d", &N, &M);
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (j == M - 1) {
					fout << d++ << endl;
					// printf("%d", d++);
				} else {
					fout << d++ << " ";
					//  printf("%d ", d++);
				}               
			}
			//printf("\n");
		}
    }
	return 0;
}

/*
Z-«аполнение матрицы последовательными числами
*/