#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *my_strcat(char *dest, const char *src) {
	char *tempo = dest;
	while (*dest != '\0') {
		dest++;
	}
	while (*src != '\0') {
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return tempo;
				
}

int main(void) {
	char mot [] = "Bon";
	char mot2 [] = "jour";
	char *res = my_strcat(mot,mot2);
	printf("%s",res);
}
