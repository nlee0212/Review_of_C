#include <stdio.h>
#include "temp.h"
#define POW(x) (x*x)

int main(void) {
	printf("%d\n", add(3, 7));
	printf("POW 3: %d\n", POW(3));
	return 0;
}