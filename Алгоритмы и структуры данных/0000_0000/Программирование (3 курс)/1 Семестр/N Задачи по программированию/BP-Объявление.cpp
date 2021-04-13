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



int main(){
	char a[6000], b[6000];
	int A[60], B[60];
	scanf("%s%s", &a, &b);

	if(strlen(a) == strlen(b)){
		for(int i = 0; i < strlen(a); i++){
			A[a[i]-'a']++;
			B[b[i]-'a']++;
		}
	}else{
		printf("-1\n");
		return 0;
	}
	for(int i = 0; i < 60; i++){
		if(A[i] != B[i]){
			printf("-1\n");
			return 0;		
		}
	}
	int len = strlen(a);
	int count = 0;
	
	
	for(int i = 0; i < len; i++){
		if(a[i] == b[i]){
			continue;
		}
		for(int j = i + 1; j < len; j++){
			if(a[i] == b[j]){
				for(int k = j; k > i; k--){
					count++;
					swap(b[k], b[k - 1]);
				}
				break;
			}
		}
	}
	printf("%d", count);

	return 0;
}

/*
��� ��������, � ��������� �� ������ ����� ��������� ������ ����������, ��������, "������ ������ �����������", "���� �� 23:00" � �.�. ��� ����������, ���� ��� ����� ����������, ��������, �� ������� ��� ������ ����� �����. ��� ����� ���������� ��������� ���������� �������� ���� "�������� ������� ��� �������� ����� ������� ����������", ����� �������� ������ ����������. ��������, ���� ���������� �abac� � �cbaa� ��� ���������� ��������� 4 ����� ��������: �cbaa� -> �caba� -> �acba� -> �abca� -> �abac�.
*/