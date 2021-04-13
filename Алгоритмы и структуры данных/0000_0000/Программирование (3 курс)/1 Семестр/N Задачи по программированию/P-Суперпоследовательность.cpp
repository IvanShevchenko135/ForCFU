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

int T, N, super;
double Arr[51];

void Me() {
	cin >> N;
	Arr[0] = 0;
	super = 1;
	for (int i = 1; i < N + 1; i++) {
		cin >> Arr[i];
		if (Arr[i] <= Arr[i - 1]) {
			cout << "No";
			super = 0;
			break;
		}
	}
	if (super) {
		for (int i = 1; i < N - 1 && super; i++) {
			for (int j = i + 1; j < N && super; j++) {
				for (int k = j + 1; k < N + 1 && super; k++) {
					if (Arr[i] + Arr[j] > Arr[k])
						break;
					if (Arr[i] + Arr[j] == Arr[k]) {
						cout << "No";
						super = 0;
					}
				}
			}
		}
	}
	if (super)
		cout << "Yes";
	system("pause");
	return 0;
}

void SPP(){
	int	N, a[51];
	int maxsum, b[60000];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	scanf("%d",&N);
	for(int i = 0; i < N; i++){ //Считывание массива
		scanf("%d",&a[i]);
	}
	for(int i = 1; i < N; i++){ //Проверка на возрастающую последовательность
		if(a[i - 1] >= a[i]){
			printf("No\n");
			return;
		}
	}

	if(N > 1){
		b[a[0] + a[1]] = 1;
		maxsum = a[N - 1] * N;
		for(int i = 2; i < N; i++){
			if(b[a[i]] == 1){
				printf("No\n");
				return;
			}
			for(int j = 0; j < i; j++){
				b[a[i] + a[j]] = 1;
			}
			for(int j = maxsum; j - a[i] >= 0; j--){
				if(b[j - a[i]] == 1){
					b[j] = 1;
				}
			}
		}
		printf("Yes\n");
	}else{
		printf("Yes\n");
	}
	return;
}


void Kur() {
		SPP();
    return;
}

int main() {
	while (true) {
		Me();
		Kur();
	}
	return 0;
}