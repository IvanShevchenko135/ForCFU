#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <cstring> 
#include <string> 
using namespace std;

int main()
{
	string a;
	cin >> a;
	int left = 0, right = a.length() - 1, iter = 0, r, index = a.length() / 2;

	while (left < right) {
		if (a[left] == a[right]) {
			left++;
			right--;
		}
		else {
			if (iter == 1) {
				index = r;
				break;
			}
			else {
				r = right;
				index = left;
				left++;
			}
			iter++;
		}
	}
	a.erase(index, 1);
	cout << a << endl;
	return 0;
}

/*
���� ������, ��������� ������ �� ��������� ���� ����������� ��������. ��������, ��� ���� ������� �� ������ ������ ���� �����, �� ��������� ��������� - ������, ������� �������� ����� ������� � ������ ������ ���������.

�������� ���������, ������� ���������� �� �������� ������ ��������� ����� �����. ���� ����� ����������� ����� ���������� ��������� - �������� �����.
*/ 