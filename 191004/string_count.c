#include <stdio.h>

int main(void) {
	char a[] = "Hello World!";
	int i, count = 0;

	for (i = 0; i < sizeof(a) / sizeof(char); i++)
		if (a[i] == 'l')
			count++;

	printf("%d\n", count);

	return 0;
}