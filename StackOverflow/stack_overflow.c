#include <stdio.h>

int fonct(int nbr) {
	int res;
	
	if (nbr <=0 ) {
		res = 0;
	}	
	else {
		if (nbr >= 1) {
			res = 1+fonct(nbr-1);
		}
	}
	return res;
}	

int main(void) {
	int res;
	res = fonct(1000);
	printf("%d", res);
}
