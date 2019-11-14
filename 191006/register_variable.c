#include <stdio.h>

int main(void) {
	register int a = 5, i;

	for (i = 0; i < a; i++) {
		printf("%d\n", i);
	}

	return 0;
}