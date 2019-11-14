#include <stdio.h>

void add(int *a) {
	*a = (*a) + 1;
}

int main(void) {
	int a = 5;
	add(&a);
	printf("%d\n", a);//6

	return 0;
}