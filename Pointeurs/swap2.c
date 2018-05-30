#include <stdio.h>

void swap2 (double *x, double *y) {
	double z = *x;
	*x= *y;
	*y = z;
}

int main() {
	double a = 1;
	double b = 2;
	printf("a= %f et b = %f\n", a, b);
	swap2(&a,&b);
	printf("a = %f et b = %f\n", a, b);
	return 0;
} 
