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

bool NextPermutation(int *p, int n){
	int min;
	bool ololo = false;
	
	for(int i = n - 2; i >= 0; i--){
		for(int j = i + 1; j < n; j++){
			if(p[i] < p[j]){ // ��������:D (����� ������)
				min = i + 1;
				for(int k = i + 1; k < n; k++){ //���������� �������� �� ������ �����
					if(p[k] < p[min] && p[k] > p[i]){
						min = k;
					}
				}
				swap(p[i], p[min]); //������������ ������������ � i
				for(int l = i + 1; l < n - 1; l++){ //���������� ������ �����
					for(int r = l + 1; r < n; r++){
						if(p[l] > p[r]){
							swap(p[l], p[r]);
						}
					}
				}
				ololo = true;
				break;
			}
		}
		if(ololo){
			break;
		}
	}
	return ololo;
}

int main(){
	int N, mass[10000];
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%d", &mass[i]);
	}
	
	if(NextPermutation(mass, N)){
		for(int i = 0; i < N; i++){
			printf("%d ", mass[i]);
		}
	}else{
		printf("Not exist");
	}
	return 0;
}

/*
�������� �������, �������, ������� ������ � ��������� ������������� ����������� ����� �� 1 �� N, ����������� � ���� ������� ��������� � ������������������ ������� ������������. �������������� ������ �������� ������. ������� ������ ����� ��������� ���������:

bool NextPermutation(int *p, int n);

��� *p - ��������� �� ������ � ������� �������������, � n - ���������� ��������� � ������� p. ���� ��������� ������������ �� ����������, ������� ������ ���������� false. ���� ��������� ������������ ��������, ������� ������ ��������� true.

�������� ���������, ������� ������ �� ������������ ������ ����� ��������� ������, ���������� N ��������� ����������� ����� � ��������� �� 1 �� N � �������������� ����� ��������� ������������ ���� �����, � ������� ��������� � ������������������ ������� ������������. ��� ��������� ������������ �������������� ���������� ��������. ����������� ������� ������������ ������.
*/