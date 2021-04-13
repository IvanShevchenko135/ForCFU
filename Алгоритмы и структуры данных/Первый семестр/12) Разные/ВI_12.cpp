#include <iostream>
using namespace std;

int main() {

	char first_lock[4], second_lock[4];
	int f, s;

	cin >> first_lock;
	cin >> second_lock;
	f = (int)(first_lock[3] - '0');
	s = (int)(second_lock[3] - '0');
	if (f % 2 == 0 || s % 2 == 1) 
		cout << "yes" << endl;
	else 
		cout << "no" << endl;
	//system("pause");
	return 0;
}