#include <iostream>
#include <cmath>
using namespace std;

class Square 
{
private:
	double side_length;
public:
	Square();
	Square(double side_length);
	Square(const Square &obj);
	~Square();
	void setSideLen(double side_length);
	double getSideLen() const;
	double findArea();
	double findPerimeter();
	double findDiag();
};

Square::Square() 
{
	side_length = 1.0;
	cout << "Создан квадрат со стороной " << side_length << "." << endl;
}

Square::Square(double side_length)
{
	if (side_length > 0)
	{
		this->side_length = side_length;
		cout << "Создан квадрат со стороной " << this->side_length << "." << endl;
	}
	else 
	{
		cout << "Сторона квадрата должна быть больше нуля." << endl;
		this->side_length = 1.0;
	}
}

Square::Square(const Square &obj)
{
	side_length = obj.getSideLen();
	cout << "Вызван конструктор копирования." << endl;
}

Square::~Square() 
{
	cout << "Квадрат удален." << endl;
}

void Square::setSideLen(double side_length)
{
	if (side_length > 0) this->side_length = side_length;
	else cout << "Сторона квадрата должна быть больше нуля." << endl;
}

double Square::getSideLen() const 
{
	return side_length;
}

double Square::findArea()
{
	return side_length * side_length;
}

double Square::findPerimeter()
{
	return 4 * side_length;
}

double Square::findDiag()
{
	return sqrt(2) * side_length;
}

int main() 
{
	setlocale(LC_ALL, "PL_pl.UTF-8");

	Square first;
	Square second = Square(5.51);
	Square third = second;

	cout << endl;

	cout << "Длинна стороны первого квадрата: " << first.getSideLen() << endl;
	cout << "Площадь первого квадрата: " << first.findArea() << endl;
	cout << "Периметр первого квадрата: " << first.findPerimeter() << endl;
	cout << "Длинна диагонали первого квадрата: " << first.findDiag() << endl;

	cout << endl;

	cout << "Длинна стороны второго квадрата: " << second.getSideLen() << endl;
	cout << "Площадь второго квадрата: " << second.findArea() << endl;
	cout << "Периметр второго квадрата: " << second.findPerimeter() << endl;
	cout << "Длинна диагонали второго квадрата: " << second.findDiag() << endl;

	cout << endl;

	cout << "Длинна стороны третьего квадрата: " << third.getSideLen() << endl;
	cout << "Площадь третьего квадрата: " << third.findArea() << endl;
	cout << "Периметр третьего квадрата: " << third.findPerimeter() << endl;
	cout << "Длинна диагонали третьего квадрата: " << third.findDiag() << endl;

	cout << endl;

	return 0;
}