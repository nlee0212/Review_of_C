#include <stdio.h>
#include <string.h>

int main(void) {
	char *a = "I'm Na Yeon.";

	printf("a: %s\n", a);
	printf("���ڿ��� ũ��: %d\n",strlen(a));//null�ٷ� �������� ���� null ������!

	printf("\n");

	char *b = "I'm Sally.";
	printf("b: %s\n", b);
	printf("strcmp a & b (������ ��): %d\n", strcmp(a, b));

	/*
	strcpy(a, b);
	printf("strcpy(a,b): %s\n", a);//�� �ϸ� �ȵ�. �ֳĸ� char�������� ���ڿ��� ���� ��ȯ�� �Ұ��ϴϱ�!
	*/

	printf("\n");

	char first[20] = "I'm Happy!";
	char second[20] = "I'm Sad.";

	printf("first: %s\n", first);
	printf("second: %s\n", second);
	//strcpy(first, second);
	//printf("updated first: %s\n", first);
	strcat(first, second);
	printf("concatenated string: %s\n", first);

	printf("\n");

	char sentence[100] = "I like you like you like me.";
	char word[20] = "like";

	printf("testing strstr - find the 'word' from the sentence: %s\n", strstr(sentence, word));
	//���� ù��°�� word�� ��Ÿ���� �ּҰ����� ��ȯ���� �� �� ����.

	return 0;
}