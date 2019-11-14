#include <stdio.h>

int main(void) {
	int a[10] = { 1,3,5,7,9,2,4,6,8,0 };
	int zero[10] = { 0, };
	int i;

	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
	for (i = 0; i < 10; i++)
		printf("%d ", zero[i]);

	return 0;
}