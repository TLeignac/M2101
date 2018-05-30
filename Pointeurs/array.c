#include <stdio.h>
#include <stdlib.h>
int *create_array(int size) {
	int *tab = malloc (100 * sizeof(int));
	for(int i =size; i > 0; --i) {
		tab[size-i] = i;
	}
	return tab;
}

void display_array(int *array, int size) {
	printf("[ ");
	for (int j = 0; j < size ; ++j) {
		printf("%d |", array[j]);
	}
	printf(" ]");
}

int main(void) {
	int *res = create_array(10);
	display_array(res, 10);
}
