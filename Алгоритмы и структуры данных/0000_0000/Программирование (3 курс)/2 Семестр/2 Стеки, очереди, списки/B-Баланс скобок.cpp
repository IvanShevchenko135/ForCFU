#define _CRT_SECURE_NO_WARNINGS 
#include <iostream> 
#include <cstdlib> 
#include <stdio.h> 
#include <math.h> 
#include <iomanip> 
#include <cstring> 
#include <string> 
#include <stack>
using namespace std;

string s;

string isvalid() {
	if (s == "") return "Yes";
	int s_size = s.length();
	stack <int> bracket;
	for (int i = 0; i < s_size; i++) {
		switch (s[i]) {
		case '(':
			bracket.push(1);
			break;
		case '[':
			bracket.push(2);
			break;
		case ']':
			if (bracket.empty()) return "No";
			if (bracket.top() != 2) return "No";
			bracket.pop();
			break;
		case ')':
			if (bracket.empty()) return "No";
			if (bracket.top() != 1) return "No";
			bracket.pop();
			break;

		}
	}
	if (!bracket.empty()) return "No";
	return "Yes";
}

int main() {
	int T;
	cin >> T;
	getline(cin, s);
	while (T--) {
		getline(cin, s);
		cout << isvalid() << endl;
	}
	return 0;
}
/*
Баланс скобок
Имеется строка, содержащая скобки ( ) и [ ]. Скобочное выражение считается правильным, если:

оно является пустым
если A и B правильны, то AB правильно
если A правильно, то (A) и [A] правильны
Напишите программу, которая по входной строке, содержащей скобочное выражение, определит корректно ли оно. Длина строки не больше 128 символов.

Формат входных данных
Первая строка содержит количество тестов n. Каждая из следующих n строк содержит выражение, состоящее из скобок ( ) и [ ].

Формат результата
Для каждого теста вывести в отдельной строке "Yes", если выражение является правильным и "No" иначе.

Примеры
Входные данные
3
([])
(([()])))
([()[]()])()
Результат работы
Yes
No
Yes
*/