#include <stdio.h>

int main(void) {
	int a;
	char c;

	scanf("%d", &a);
	printf("%d\n", a);

	int temp;
	while((temp=getchar())!=EOF && temp!='\n'){}
	//���ۿ� EOF�� �ٹٲ��� ���� ������ while�� ����.

	scanf("%c", &c);
	printf("%c", c);

	return 0;
}