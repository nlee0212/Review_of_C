#include <stdio.h>

int main(void) {
	FILE *fp;
	char s[20] = "Hello World!";
	fp = fopen("temp.txt", "w");
	fprintf(fp, "%s\n",s);
	fclose(fp);

	return 0;
}