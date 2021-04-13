#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
#include <string>
using namespace std;

string StringXOR(string S, string K) {
	string result = "";
	for (int i = 0; i < S.length(); i++) {
		result += S[i] ^ K[i%K.length()];
	}
	return result;
}

int main() {
	string text, key, res;
	cin >> text >> key;
	res = StringXOR(text, key);
	for (int i = 0; i < res.length(); i++) {
		cout << (int)(res[i]) << " ";
	}
}

/*
Напишите функцию, которая, получив строку S и ключ K, возвращает закодированную строку, применив побитовую операцию XOR между каждым символом строки S и ключа K. Если длина ключа K меньше длины строки, операция XOR, после применения к последнему символу ключа, применяется опять с первого символа. Например, если S = "abracadabra", а K = "tebidoh", то шифрование будет осуществляться побитовым XOR следующим образом

abracadabra
tebidohtebi
Заголовок функции должен иметь следущий вид:

string StringXOR(string S, string K);
*/