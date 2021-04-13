#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;

int main()
{
	int mass[100], N, min, max, temp, dmin = 0, dmax = 0;
	scanf("%ld", &N);

	for (int i = 0; i < N; i++) {
		scanf("%ld", &mass[i]);
	}

        min = mass[0];
        max = mass[0];
	for(int i = 1; i < N; i++){
            if(mass[i] < min){
                min = mass[i];
                dmin = i;
            }
            if(mass[i] > max){
                max = mass[i];
                dmax = i;
            }
        }
        
        if(dmin > dmax){
            temp = dmin;
            dmin = dmax;
            dmax = temp;
        }
        dmin++;
        dmax--;
        
        while(dmin < dmax){
            temp = mass[dmin];
            mass[dmin++] = mass[dmax];
            mass[dmax--] = temp;
        }
        
        for(int i = 0; i < N; i++){
            printf("%d ", mass[i]);
        }
            
   
	printf("\n");
	return 0;
}