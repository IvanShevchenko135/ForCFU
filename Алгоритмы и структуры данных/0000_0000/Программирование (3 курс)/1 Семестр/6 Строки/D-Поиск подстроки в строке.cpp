#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <cstring>

using namespace std;

int main() {
	char X[1001], Y[1001];
	scanf("%s%s", &X, &Y);
	int score = 0, missing = 0;
	int Y_Length = strlen(Y) - 1;

	for (int i = 0; X[Y_Length + i] != 0; i++) {
		for (int j = 0; Y[j] != 0; j++) {
			if (X[i + j] != Y[j]) {
				missing++;
			}
			if (missing > 1) {
				break;
			}
		}
		if (missing < 2) {
			score++;

		}
		missing = 0;
	}
	printf("%d", score);
	return 0;
}

/*
������� ��� ������ ��������, ���� ��� ����� ���������� ����� � ���������� �� �����, ��� �� ���� �����. ��������, ������ abracadabra � abra��dabra �������� ��������, � ������ abracadabra � aaracadabrr - ���, ��� ��� ���������� ����� �������. ���������� ������ ����� �������� ��������.

���� ��� ������ X � Y, ��������� ������ �� ��������� ���� ����������� ��������. ����������� ���������� �������� ������ X, ������� �������� �������� � ������ Y.
*/