#include <cstdlib>
#include <iostream>

using namespace std;


int main() {
    int T, a[100][100], N, sum = 0;
	scanf("%d", &T);
    while(T--)
    {
	   scanf("%d", &N);
       for(int i = 0; i < N; i++)
       {
           for(int j = 0; j < N; j++)
           {
		scanf("%d", &a[i][j]);
           }
       }
       sum = 0;
       for (int i = 0; i < N; i++)
       { 
           sum += a[i][i];
       }
       printf("%d ", sum);
       sum = 0;
       int j = N;
       for(int i = 0; i < N; i++)
       {
           j--;
           sum += a[i][j];
       }
	   printf("%d\n", sum);
    }
    return 0;
}
/*
������ ���������� ������� ������� N � N. ���������� ����� ����� ���� ��������� �� ������� ��������� ������� (�� ������ �������� ���� � ������ ������) � �� �������� ��������� (�� ������� �������� ���� � ����� ������).
*/