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
    int T; 
    scanf("%d", &T);
    while (T--){
		int N, K;
		scanf("%d%d", &K, &N);
		printf("%d %d\n", (((N % K) == 0) ?  (N/K): N/K+1) , (((N % K) == 0) ?  N-K*(N/K-1): N-K*(N/K)) );
	}
    return 0;
}

/*
������ ������ ������� �������� � ��� �������. ������ ������� ������� ���� ������� � (K+1)-�� �� (2?K)-� ������������, ���� ������� ����� (2?K+2) ������� ������ �������, � �.�.

�������� ���������, ������� �� ������ �������� ���� ������� ���������� ����� ��������, �������� �� ������, � ���������� ����� ���� ���� � ����� ��������.
*/