#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <fstream> 
using namespace std;



int main() {
	int mass1[100001], mass2[100001], N, K, d = 0, g = 0;
	ifstream fin("merge.dat");
	ofstream fout("merge.sol");

	//scanf("%d", &N); //Input one
	fin >> N;
	for (int i = 0; i < N; i++) {
		fin >> mass1[i];
		//scanf("%lld", &mass1[i]);
	}

	//scanf("%d", &K); //Input two
	fin >> K;
	for (int i = 0; i < K; i++) {
		fin >> mass2[i];
		//scanf("%lld", &mass2[i]);
	}


	while (d + g < N + K) { //Output
		if (d < N && g < K) {
			if (mass1[d] > mass2[g]) {
				fout << mass1[d++] << endl;
				//printf("%lld ", mass1[d++]);
			}
			else if (mass1[d] == mass2[g]) {
				fout << mass1[d++] << endl << mass2[g++] << endl;
				//printf("%lld %lld ", mass1[d++], mass2[g++]);
			}
			else {
				fout << mass2[g++] << endl;
				//printf("%lld ", mass2[g++]);
			}
		}
		else {
			if (d < N) {
				fout << mass1[d++] << endl;
				//printf("%lld ", mass1[d++]);
			}
			else {
				fout << mass2[g++] << endl;
				//printf("%lld ", mass2[g++]);
			}
		}
	}
	//system("pause");
	return 0;
}

/*
Капрал Арум столкнулся с неразрешимой для него задачей. Перед ним стоят две шеренги деревянных солдат Урфина Джюса (дуболомов), в каждой из них дуболомы расположены по росту (от самого высокого к самому низкому). Капралу необходимо построить дуболомов в одну шеренгу но так, чтобы они опять были расположены по росту от самого высокого к самому низкому.

Помогите капралу Аруму решить эту задачу.
*/