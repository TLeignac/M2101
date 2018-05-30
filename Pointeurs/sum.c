#include <stdio.h>
double sum1 (double *tab, int size) {
	double res = 0;
	for (int i = 0; i < size; ++i) {
		res = res + tab[i];
	}
	return res;
}

double sum2 (double *tab, int size) {
	double res = 0;
	double *fin = tab + size;
	for (double *p = tab; p < fin; ++p) {
		res = res + *p;
	}
	return res;
}

int main(void) {
	double res1;
	double res2;
	double tab[5]={100, 10, 1, 0.1, 0.01};
	res1 = sum1(tab,5);
	printf("%f",res1);
	res2 = sum2(tab,5);
	printf("%f",res2);
}
