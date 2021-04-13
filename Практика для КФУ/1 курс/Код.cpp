#include <iostream>
#include <vector>
#include <windows.h> // библиотека для функции SetConsoleOutputCP()
using namespace std;

vector < vector <long long> > matrix;

// функция считывает с клавиатуры колличество строк матрицы
int readNumberOfRaws() {
	int n;
	cout << "Введите колличество строк матрицы: ";
	cin >> n;
	return n;
}

// функция считывает с клавиатуры колличество столбцов матрицы
int readNumberOfСolumns() {
	int n;
	cout << "Введите колличество столбцов матрицы: ";
	cin >> n;
	return n;
}

// функция считывает с клавиатуры заданную матрицу и записывает ее в глобальны массив векторов matrix
void readMatrix(int r, int c) {
	cout << "Введите значения матрицы:" << endl;
	matrix.reserve(r);
	matrix.resize(r);
	for (int i = 0, k = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			long long tmp;
			cin >> tmp;
			matrix[i].push_back(tmp);
		}
	}
	return;
}

// функция считает и возвращает ответ в упакованном виде 
vector <long long> getResult(int r, int c) {
	vector <long long> a;
	for (int i = 0; i < r; i++) {
		for (int j = i; j < r; j++) {
			long long ans = 0;
			for (int k = 0; k < c; k++) {
				ans += matrix[i][k] * matrix[j][k];
			}
			a.push_back(ans);
		}
	}
	return a;
}

// функция выводит на экран массив
void printArray(vector <long long> arr) {
	cout << "Произведение данной матрицы на транспонированную в упакованном виде:" << endl;
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return;
}

int main() {

	int r, c;
	vector <long long> result;

	SetConsoleOutputCP(1251); // функция для поддержки Кириллицы

	r = readNumberOfRaws();
	c = readNumberOfСolumns();
	readMatrix(r, c);
	result = getResult(r, c);
	printArray(result);

	system("pause"); // функция останавливает программу перед завершением, чтобы пользователь смог увидеть ответ 
	return 0; // завершение работы программы
}