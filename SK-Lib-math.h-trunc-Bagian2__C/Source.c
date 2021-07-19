
#include <stdio.h>
#include <math.h>	
#include <conio.h>

int main() {
	double x1 = 2.0, x2 = 3.9, x3 = -3.3, x4 = 4.9;
	printf(" Truncated value is %lf \n", trunc(x1));
	printf(" Truncated value is %lf \n", trunc(x2));

	printf(" Truncated value is %lf \n", trunc(x3));
	printf(" Truncated value is %lf \n", trunc(x4));

	_getch();
	return 0;
}
