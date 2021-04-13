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

long long Pol(long long Num, long long Num2) {
	char N[1000];
	int i = 0;
	while (Num2 > 0) {//��������� � ������
		N[i++] = char((Num2 % 10) + '0');
		Num2 /= 10;
	}
	N[i] = 0;
	int R = strlen(N);
	int L = 0;
	while (L < R) { //�������������;
		swap(N[L++], N[--R]);
	}
	R = strlen(N);
	L = 0;
	while (L < R) { //����������������:D
		N[--R] = N[L++];
	}


	for (int j = 0; j < strlen(N); j++) { //��������� �������    � �����
		Num2 += int(N[j] - '0');
		Num2 *= 10;
	}
	Num2 /= 10;
	if (Num2 > Num) {
		return Num2;
	}
	else {
		int po = ((strlen(N) / 2));
		Num2 += pow(10, po);
		return Pol(Num, Num2);

	}
}

int main() {

	long long Num;
	scanf("%lld", &Num);
	long long Num2 = Num;
	printf("%lld", Pol(Num, Num2));
}

/*
�������� �������, ������� �������� ����������� �����, � ���������� ���������� �����, ������� ������ ������ ��������� � �������� ��� ���� �����������, �� ���� �������� ��������� ������ ������ � ����� �������.

��������� ����� ���� �������, ������� ��������� ���������� ��������� ��� ��������� �� ������� ������ ����� N.
*/