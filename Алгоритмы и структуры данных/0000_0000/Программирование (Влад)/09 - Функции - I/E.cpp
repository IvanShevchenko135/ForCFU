#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>
#include <fstream>
#include <queue>

using namespace std;

int Kramer(int A[][2], int *B, double &x, double &y) {
	B[0] = A[0][0] * A[2][0] - A[0][1] * A[1][1];
	B[1] = A[1][0] * A[2][0] - A[0][1] * A[2][1];
	B[2] = A[0][0] * A[2][1] - A[1][0] * A[1][1];
	if (!B[0] && !B[1] && !B[2]) return 1;
	if (!B[0]) return 0;
	x = B[1] / (double)B[0];
	y = B[2] / (double)B[0];
	return 2;
}

int main() {
	int sys[3][2], det[3];
	double x, y;
	cin >> sys[0][0] >> sys[0][1] >> sys[1][0] >> sys[1][1] >> sys[2][0] >> sys[2][1];
	int t = Kramer(sys, det, x, y);
	if (t == 0) cout << "No solution!\n";
	else if (t == 1) cout << "Infinity!\n";
	else cout << fixed << setprecision(6) << x << " " << y << endl;
	//system("pause");
	return 0;
}