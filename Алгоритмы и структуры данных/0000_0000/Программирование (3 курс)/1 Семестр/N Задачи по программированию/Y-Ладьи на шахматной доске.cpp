#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;



int main() {
    const int osn=10000; 
    int a [4000],C[4000], i, N, T;
	scanf("%d", &T);
    while(T--)//�����
    {
        memset(a,0,sizeof(a));//���������
        memset(C,0,sizeof(C));//���������
        cin>>N;
        a[0]=1;//����� �����(����� ����� �������)
        a[1]=1;//���� �����
        int q=0;//�����, �� ������� �������� 1,2,3..n
        int k=a[0];//����� �������� �����
        while(q<N)//���� ����������
        {
            memset(C,0,sizeof(C));
            q++;//����������� ��� �����
            for(i=1;i<=k;i++)//���� �������� ��������� �� �����(�� 1000)
            {
                C[i+1]=(a[i]*q+C[i])/osn;
                C[i]=(a[i]*q+C[i])%osn;
                C[0]=k;
                if(C[k+1]!=0)k++;
            }
            for(i=0;i<=k;i++)//���������� � ������ 
            {
               a[i]=C[i];
            }
        }
        printf("%d",a[a[0]]);
        for(i=a[0]-1;i>0;i--)
        {
            printf("%04d",a[i]); 
        }
        printf("\n");
    }
    return 0;
}
/*
����� ����������� �������� ����� ���������� N ����� �� ��������� ����� �������� N?N ���, ����� ��� �� ���� ���� �����?
*/