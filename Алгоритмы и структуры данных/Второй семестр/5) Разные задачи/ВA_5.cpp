#include <iostream>

using namespace std;

struct crd {
	int x;
	int y;
}p[100000];

int main() {
	 
	int n;
	long long sum = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p[i].x >> p[i].y;
		sum += p[i].x * p[i].x + p[i].y * p[i].y;
	}
	sum *= (n - 1);
	long long x_sum = 0, y_sum = 0, x_sum_prev = 0, y_sum_prev = 0;
	for (int i = 1; i < n; i++) {
		x_sum += p[i].x;
		y_sum += p[i].y;
	}
	sum -= 2 * (x_sum * p[0].x);  
	sum -= 2 * (y_sum * p[0].y);
	x_sum_prev = x_sum;
	y_sum_prev = y_sum;
	for (int i = 1; i < n; i++) {
		x_sum = x_sum_prev - p[i].x;
		sum -= 2 * (x_sum * p[i].x);
		y_sum = y_sum_prev - p[i].y;
		sum -= 2 * (y_sum * p[i].y);
		x_sum_prev = x_sum;
		y_sum_prev = y_sum;
	}
	cout << sum << endl;
	return 0;
}