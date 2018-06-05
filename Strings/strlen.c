#include <stdio.h>
int my_strlen(const char *str) {
	int compt;
	compt = 0;
	int *fin = sizeof(str);
	for(int i = 1; i < fin; i++) {
		++compt;
	}
	return compt;
}
int main(void) {
	char mot[7]="Bonjour";
	printf("Il y a %d caractères ",my_strlen(mot));
}
