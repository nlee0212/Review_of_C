#include <stdio.h>
#include <limits.h>

int main(void) {
	int a[10] = { 1,3,5,7,9,2,4,6,8,0 };
	int i, maxValue=INT_MIN;

	for (i = 0; i < 10; i++)
		if (maxValue < a[i])
			maxValue = a[i];

	printf("%d\n", maxValue);

	return 0;
}