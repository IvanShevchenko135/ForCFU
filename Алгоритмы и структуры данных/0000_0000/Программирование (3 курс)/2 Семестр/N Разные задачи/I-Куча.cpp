#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string>
#include <set>
#include <fstream>
#include <algorithm>
#include <math.h>
#include <queue>
using namespace std;
int heap[10000000], hsize = 0;
char ID, trash;

int hinsert(int num) {
	heap[hsize++] = num;
	for (int i = hsize - 1; i > 0; i = (i - 1)/ 2) {
		if (heap[i] > heap[(i - 1) / 2]) {
			swap(heap[i], heap[(i - 1) / 2]);
		}
		else {
			return 0;
		}
	}
	return 0;
}

int herase() {
	printf("%d\n", heap[0]);
	heap[0] = heap[hsize - 1];
	heap[hsize - 1] = 0;
	int temp = 0, head = 1, l, r;

	while (true) {
		head = temp;
		l = head * 2 + 1;
		r = head * 2 + 2;
		if (heap[head] < heap[l] && l != hsize) {
			head = l;
		}
		if (heap[head] < heap[r] && l != hsize) {
			head = r;
		}
		swap(heap[head], heap[temp]);
		if (temp == head) {
			break;
		}
		temp = head;
	}
	hsize--;
	return 0;
}

int main() {
	while (scanf("%c", &ID) != EOF) {
		if (ID == 'I') {
			int number;
			scanf("%d%c", &number, &ID);
			hinsert(number);
		}
		else {
			scanf("%c", &ID);
			herase();
		}
	}
}

/*
Задан массив, содержащий не более 2 ⋅ 106 элементов. Первоначально массив пуст. Входной поток содержит множество запросов. Каждый запрос принадлежит одному из двух типов. Первый тип - добавить элемент в массив. Второй тип - удалить наибольший элемент из массива. Для каждого запроса на удаление максимального элемента вам необходимо напечатать этот элемент.

Входные данные
Стандартный поток ввода содержит некоторое количество запросов. Каждый запрос содержится в отдельной строке. Общее число запросов не превышает 2 ⋅ 106.

Запрос первого типа (добавить элемент в массив) состоит из заглавной латинской буквы I, после которой через пробел идет добавляемое в массив целое число. Добавляемые в массив числа лежат в диапазоне от 1 до 109.

Запрос второго типа состоит из единственной заглавной латинской буквы D.

Входные данные корректны. То есть запрос на удаление появляется только тода, когда в массиве есть элементы.

Выходные данные
Для каждого запроса на удаление выведите в отдельную строку стандартного потока вывода удаляемый элемент - наибльший элемент из содержащихся в массиве в момент выполения запроса.
*/