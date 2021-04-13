#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;



int main() {
    const int osn=10000; 
    int a [4000],C[4000], i, N, T;
	scanf("%d", &T);
    while(T--)//тесты
    {
        memset(a,0,sizeof(a));//зануление
        memset(C,0,sizeof(C));//зануление
        cin>>N;
        a[0]=1;//длина числа(число равно еденице)
        a[1]=1;//само число
        int q=0;//число, на которое умножаем 1,2,3..n
        int k=a[0];//длина длинного числа
        while(q<N)//цикл факториала
        {
            memset(C,0,sizeof(C));
            q++;//увеличиваем это число
            for(i=1;i<=k;i++)//цикл длинного умножения на цифру(до 1000)
            {
                C[i+1]=(a[i]*q+C[i])/osn;
                C[i]=(a[i]*q+C[i])%osn;
                C[0]=k;
                if(C[k+1]!=0)k++;
            }
            for(i=0;i<=k;i++)//записываем в массив 
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
Каким количеством способов можно расставить N ладей на шахматной доске размером N?N так, чтобы они не били друг друга?
*/