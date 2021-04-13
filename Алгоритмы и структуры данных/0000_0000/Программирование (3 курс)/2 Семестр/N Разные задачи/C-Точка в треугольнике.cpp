#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <fstream> 
using namespace std;

int main() {

	ifstream fin("trian.dat");
	ofstream fout("trian.sol");

	long double summ1 = 0;
	long double summ2 = 0;
	long long kord[4][2];
	long long temp[2];
	int n = 3;

	for (int i = 0; i < 4; i++) { //���������� ���������
		fin >> kord[i][0] >> kord[i][1];
		//scanf("%d%d", &kord[i][0], &kord[i][1]);
	}


	//first area
	summ1 = abs(kord[0][0] * kord[1][1] + kord[1][0] * kord[2][1] + kord[2][0] * kord[0][1] - kord[1][0] * kord[0][1] - kord[2][0] * kord[1][1] - kord[0][0] * kord[2][1]) / 2.0;

	//second area
	summ2 += abs(kord[0][0] * kord[1][1] + kord[1][0] * kord[3][1] + kord[3][0] * kord[0][1] - kord[1][0] * kord[0][1] - kord[3][0] * kord[1][1] - kord[0][0] * kord[3][1]) / 2.0;
	summ2 += abs(kord[0][0] * kord[2][1] + kord[2][0] * kord[3][1] + kord[3][0] * kord[0][1] - kord[2][0] * kord[0][1] - kord[3][0] * kord[2][1] - kord[0][0] * kord[3][1]) / 2.0;
	summ2 += abs(kord[1][0] * kord[2][1] + kord[2][0] * kord[3][1] + kord[3][0] * kord[1][1] - kord[2][0] * kord[1][1] - kord[3][0] * kord[2][1] - kord[1][0] * kord[3][1]) / 2.0;


	if (abs(summ2 - summ1) < 0.000000001) {
		fout << "YES";
		//printf("YES");
	}
	else {
		fout << "NO";
		//printf("NO");
	}

	//system("pause");
	return 0;
}
/*
������ C: ����� � ������������

�������� ���������� ����� ����� ���� ������� �������� ���� ������ ��������� ����������� ������� � ������ ���� ������. ��� ����� ����������� ������ ������������ ����� ������������, ������ ������ ���������� ���� ������ ������������, ���� �� ��� �������. ��� ���������� ���������, ��������� �� ��� ����� � ������������ �������.

������ �������� ����� trian.dat
��������� ���� trian.dat �������� ������ ������. � ������ ���� ������� �������� ���������� ������ ������������ - �� ��� ����� ����� X, Y, ����������� ��������, � ������ (-1000000 � X, Y � 1000000). �������������, ��� ��� ��� ������� �� ����� �� ����� ������.

��������� ������ ����� �������� ���������� �����, � ������� ����� ���������� ������ ������ �����, - ��� ����� ����� A, B, ����������� �������� (-1000000 � A, B � 1000000).

������ ��������� ����� trian.sol
��������� ���� trian.sol ������ ����� YES, ���� ����� � ������������ (�,�) ����� ������ ������������ ��� �� ��� �������, � NO � ��������� ������.
*/