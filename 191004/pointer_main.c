#include <stdio.h>

int main(void) {
	int a = 5;
	int *b = &a;
	int **c = &b;

	printf("%d\n%d", *b,**c);

	return 0;
}