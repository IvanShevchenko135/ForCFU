#include <iostream>
#include <cstdlib>
#include <stdio.h> 
#include <math.h>
#include <iomanip> 
using namespace std;

int main() 
{ 
	long double Ax, Ay, Bx, By, Cx, Cy, BA, CA;
	const long double eps = 1e-9;
	scanf("%Lf%Lf%Lf%Lf%Lf%Lf", &Ax, &Ay, &Bx, &By, &Cx, &Cy);

	BA = sqrt((Ax - Bx)*(Ax - Bx) + (Ay - By)*(Ay - By));
	CA = sqrt((Ax - Cx)*(Ax - Cx) + (Ay - Cy)*(Ay - Cy));



	if ((abs(BA - CA) <= eps) || (abs(CA - BA) <= eps)) {
		printf("equal\n%.9Lf", BA);
	}
	else if (BA < CA) {
		printf("B\n%.9Lf", BA);
	}
	else if (BA > CA) {
		printf("C\n%.9Lf", CA);
	}

	return 0;
}