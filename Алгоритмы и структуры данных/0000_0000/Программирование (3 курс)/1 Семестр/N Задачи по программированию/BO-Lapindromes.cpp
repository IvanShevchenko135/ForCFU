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


bool test(char *str){
	int L[100], R[100], l, r;
	memset(R,0,sizeof(R));
	memset(L,0,sizeof(R));
	l = 0;
	r = strlen(str)-1;
	while(l < r){
		L[str[l++]-'a']++;
		R[str[r--]-'a']++;
	}
	for(int i = 0; i < 100; i++){
		if(L[i] != R[i]){
			return false;
		}
	}
	return true;
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		char str[2000];
		memset(str, 0, sizeof(str));
		scanf("%s", &str);
		if(test(str)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}
/*
Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same frequency of each character. If there are odd number of characters in the string, we ignore the middle character and check for lapindrome. For example gaga is a lapindrome, since the two halves ga and ga have the same characters with same frequency. Also, abccab, rotor and xyzxy are a few examples of lapindromes. Note that abbaab is NOT a lapindrome. The two halves contain the same characters but their frequencies do not match.

Your task is simple. Given a string, you need to tell if it is a lapindrome.
*/