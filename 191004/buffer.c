#include <stdio.h>

int main(void) {
	int a;
	char c;

	scanf("%d", &a);
	printf("%d\n", a);

	int temp;
	while((temp=getchar())!=EOF && temp!='\n'){}
	//버퍼에 EOF나 줄바꿈이 없을 때까지 while문 돌림.

	scanf("%c", &c);
	printf("%c", c);

	return 0;
}