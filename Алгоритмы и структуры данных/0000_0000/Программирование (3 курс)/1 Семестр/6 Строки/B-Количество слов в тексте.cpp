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
	int l, score;
	char probel = ' ';
	char A[10001];


	while (fgets(A, 10000, stdin) != NULL) {
		l = strlen(A) - 1;
		if (l != -1) {
			score = 0;
			for (int j = 0; j < l; j++) {
				if (A[j + 1] == ' ' && A[j] != probel) {
					score++;
				}
			}
			if (A[l] == '\n') {
				if (A[l - 1] != probel) {
					score++;
				}
			}
			else {
				if (A[l] != probel) {
					score++;
				}
			}
			if ((score > 1 || A[0] != '\n') && (score != 0)) {
				printf("%d\n", score);
			}
		}
	}

	return 0;
}
 
 /*
 ��� ��� �����, ��������� �� ���������� �����. ������ ������ �������� ��������� ����, ��������� �� ������� � ��������� ���� ����������� �������� � ������ ���������� (�����, �������, ��������������� � �������������� �����, ��������, ��������� � ������� �������, �����, ������� � ���������� ������, ���������, ����� � �������). ����� ����������� ����� ��� ����������� ���������. ������� ����� ����� ����������� � ������ � � ����� ������. ����� ����� ��������� ������ ������ (�� ���� ������, �� ���������� ����).

���������� ���������� ���� � ������ �������� ������.
*/