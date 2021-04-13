#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;


int arr[101], N, temp;
int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &temp);
		if (temp > N || arr[temp] > 0) {
			printf("NO\n%d", temp);
			return 0;
		}
		arr[temp]++;
	}
	printf("YES");
	return 0;
}