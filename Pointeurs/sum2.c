double sum (double*tab, int size) {
	double res = 0;
	double *fin = tab + size;
	for (double *p = tab; p < fin; ++p) {
		res = res + *p;
	}
	printf(res);
}
