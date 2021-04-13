#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Student
{
private:
	string name = "Иван";
	string last_name = "Иванов";
	string birth_date = "01.01.2000";
	string phone_number = "+71111111111";
                                
	void printStudentData();

	friend class StudentGroup;

	friend bool nameSort(Student a, Student b);
	friend bool lastNameSort(Student a, Student b);
	friend bool birthDateSort(Student a, Student b);
	friend bool phoneNumberSort(Student a, Student b);
};

class StudentGroup
{
private:
	int n = 0;
	vector <Student> arr;
public:
	void addStudent(string name, string last_name, string birth_date, string phone_number);
	void sortStudents(int field);
	int findStudent(int field, string key);
	bool deleteStudent(int field, string key);
};

bool nameSort(Student a, Student b)
{
	return a.name < b.name;
}

bool lastNameSort(Student a, Student b)
{
	return a.last_name < b.last_name;
}

bool birthDateSort(Student a, Student b)
{
	return a.birth_date < b.birth_date;
}

bool phoneNumberSort(Student a, Student b)
{
	return a.phone_number < b.phone_number;
}

void Student::printStudentData()
{
	cout << name << " ";
	cout << last_name << " ";
	cout << birth_date << " ";
	cout << phone_number << " ";

	return;
}

void StudentGroup::addStudent(string name, string last_name, string birth_date, string phone_number)
{
	Student new_student;
	new_student.name = name;
	new_student.last_name = last_name;
	new_student.birth_date = birth_date;
	new_student.phone_number = phone_number;

	n++;
	arr.push_back(new_student);

	cout << "Число студентов в списке: " << n << "." << endl;
}

int StudentGroup::findStudent(int field, string key)
{
	if (field == 0) {
		for (int i = 0; i < n; i++)
		{
			if (arr[i].name == key) {
				arr[i].printStudentData();
				return i;
			}
		}
		cout << "Запись не найдена." << endl;
		return -1;
	}
	if (field == 1) {
		for (int i = 0; i < n; i++)
		{
			if (arr[i].last_name == key) {
				arr[i].printStudentData();
				return i;
			}
		}
		cout << "Запись не найдена." << endl;
		return -1;
	}
	if (field == 2) {
		for (int i = 0; i < n; i++)
		{
			if (arr[i].birth_date == key) {
				arr[i].printStudentData();
				return i;
			}
		}
		cout << "Запись не найдена." << endl;
		return -1;
	}
	if (field == 3) {
		for (int i = 0; i < n; i++)
		{
			if (arr[i].phone_number == key) {
				arr[i].printStudentData();
				return i;
			}
		}
		cout << "Запись не найдена." << endl;
		return -1;
	}
	cout << "Запись не найдена." << endl;
	return -1;
}

bool StudentGroup::deleteStudent(int field, string key)
{
	int index = findStudent(field, key);
	if (index == -1) 
	{
		return false;
	}
	else
	{
		n--;
		arr.erase(arr.begin() + index);
		cout << "- запись удалена." << endl;

		cout << "Число студентов в списке: " << n << "." << endl;

		return true;
	}
}

void StudentGroup::sortStudents(int field) 
{
	if (field == 0)
	{
		sort(arr.begin(), arr.end(), nameSort);
	}
	else if (field == 1)
	{
		sort(arr.begin(), arr.end(), lastNameSort);
	}
	else if (field == 2) 
	{
		sort(arr.begin(), arr.end(), birthDateSort);
	}
	else if (field == 3) 
	{
		sort(arr.begin(), arr.end(), phoneNumberSort);
	}
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ") ";
		arr[i].printStudentData();
		cout << endl;
	}
	return;
}

int main()
{
	setlocale(LC_ALL, ".UTF-8");

	StudentGroup my_group;
	
	while(true) 
	{
		int operation;
		
		cout << "Операции: " << endl;
		cout << "1 - Добавить запись. " << endl;
		cout << "2 - Удалить запись. " << endl;
		cout << "3 - Найти запись. " << endl;
		cout << "4 - Отсортировать таблицу. " << endl;
		cout << "0 - Завершить работу. " << endl;
		
		cin >> operation;
		
		cout << endl;

		if (operation == 0) return 0;
		else if (operation == 1) 
		{
			string name, last_name, birth_date, phone_number;
			
			cout << "Имя: ";
			cin >> name;
			cout << "Фамилия: ";
			cin >> last_name;
			cout << "Дата рождения: ";
			cin >> birth_date;
			cout << "Номер телефона: ";
			cin >> phone_number;
			cout << endl;
			
			my_group.addStudent(name, last_name, birth_date, phone_number);

			cout << endl;
		}
		else if (operation == 2) 
		{
			int field;
			string key;
			
			cout << "Удалить по: " << endl;
			cout << "1 - имени; " << endl;
			cout << "2 - фамилии; " << endl;
			cout << "3 - дате рождения; " << endl;
			cout << "4 - номеру телефона; " << endl;
			cout << "0 - отмена. " << endl;
			cin >> field;
			if (field != 0) 
			{
				cout << "Введите значения поля:  ";
				cin >> key;
				cout << endl;
				my_group.deleteStudent(field - 1, key);
			}
		}
		else if (operation == 3) 
		{
			int field;
			string key;
			
			cout << "Найти по: " << endl;
			cout << "1 - имени; " << endl;
			cout << "2 - фамилии; " << endl;
			cout << "3 - дате рождения; " << endl;
			cout << "4 - номеру телефона; " << endl;
			cout << "0 - отмена. " << endl;
			cin >> field;
			if (field != 0) 
			{
				cout << "Введите значения поля:  ";
				cin >> key;
				cout << endl;
				my_group.findStudent(field - 1, key);
			}
		}
		else if (operation == 4) 
		{
			int field;
			
			cout << "Отсортировать по: " << endl;
			cout << "1 - имени; " << endl;
			cout << "2 - фамилии; " << endl;
			cout << "3 - дате рождения; " << endl;
			cout << "4 - номеру телефона; " << endl;
			cout << "0 - отмена. " << endl;
			cin >> field;
			if (field != 0)
			{
				my_group.sortStudents(field - 1);
			}
		}
		else cout << "Неверный номер операции..." << endl;
	}
}
