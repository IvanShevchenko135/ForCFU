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
� ��������� ������� ��������� ������������� ������ �������� �����. ������ ������ ������ ���������� ������������: �� ������� ������������ ������ ��� N ���������� ���������� � ���� � ������ M-� ��� �������� ��� �����.

������������ ������ �������, ��� ������� ��������� ������ �� ������ ������ ���� ���������� ������. �� �������� N � M �������� ��� ����������, ��� � ��������� ��� � �������� ������ ������� ��� ��������� ����.
*/