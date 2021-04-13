#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

	int hours, minutes, T;
	string time;

	cin >> T;
	while (T--) {
		cin >> time;
		hours = (int)(time[0] - '0');
		if (hours != 0) {
			hours *= 10;
		}
		int tmp;
		tmp  = (int)(time[1] - '0');
		hours += tmp;
		minutes = (int)(time[3] - '0');
		if (minutes != 0) {
			minutes *= 10;
		}
		tmp = (int)(time[4] - '0');
		minutes += tmp;
		if (hours == 12)
			hours = 0;
		if (minutes != 0)
			hours = 12 - hours - 1;
		else
			hours = 12 - hours;
		minutes = 60 - minutes;
		if (minutes == 60)
			minutes = 0;
		if (hours == 0)
			hours = 12;
		if (hours < 10)
			cout << 0;
		cout << hours;
		cout << ":";
		if (minutes < 10)
			cout << 0;
		cout << minutes << endl;
	}
	//ssystem("pause");
	return 0;
}