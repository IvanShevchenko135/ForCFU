#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <string.h>
using namespace std;


int main()
{
	char a[10001][101];
        int N;
        bool bo = true;
        scanf("%d", &N);
        
        for(int i = 0; i < N; i++) {
            scanf("%s", &a[i]);
        }
        
        for(int i = 0; i < N-1; i++){
            for(int j = i+1; j < N; j++){
                for (int k = 0; a[i][k] != 0 && a[j][k] != 0; k++) {
                        if (a[i][k] > a[j][k]) {
                            //printf("%s > %s\n", a[i], a[j]);
                            swap(a[i], a[j]);
                            bo = false;
                            break;
                        }else if(a[i][k] < a[j][k]){
                            bo = false;
                            break;
                        }
                }
                if(bo == true){
                    if (strlen(a[i]) > strlen(a[j])) {
                        swap(a[i], a[j]);
                    }
                }
                bo = true;
            }
        }
        
        for(int i = 0; i < N; i++){
            printf("%s\n", a[i]);
        }
	return 0;
}

/*
Дан набор строк. Необходимо отсортировать строки в лексикографическом порядке.
*/