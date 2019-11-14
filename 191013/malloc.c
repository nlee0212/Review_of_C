#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *a = malloc(sizeof(int));
	printf("a's address: %d\n", a);
	free(a);
	a = malloc(sizeof(int));
	printf("a's new address: %d\n", a);
	free(a);

	return 0;
}