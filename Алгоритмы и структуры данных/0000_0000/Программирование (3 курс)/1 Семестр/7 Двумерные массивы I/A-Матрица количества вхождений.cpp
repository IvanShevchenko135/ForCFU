#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <cstring> 
#include <string> 
using namespace std;
 
int B[1001];
int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    int A[N][M];
 
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%d", &A[i][j]);
            B[A[i][j]]++;
        }
    }
 
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            printf("%d ", B[A[i][j]]);
        }
        printf("\n");
    }
}

/*
����� ��������� ������ A ������� N x M, ���������� ����������� ����� �� 1 �� 1000. ���������� ������� ����� ������ B ������� N x M, � ������� ������� B[i][j] ����� ���������� ��������� �������� �������� A[i][j] � ������ �.
*/
