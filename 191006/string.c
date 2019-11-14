#include <stdio.h>
#include <string.h>

int main(void) {
	char *a = "I'm Na Yeon.";

	printf("a: %s\n", a);
	printf("문자열의 크기: %d\n",strlen(a));//null바로 직전까지 세고 null 불포함!

	printf("\n");

	char *b = "I'm Sally.";
	printf("b: %s\n", b);
	printf("strcmp a & b (사전순 비교): %d\n", strcmp(a, b));

	/*
	strcpy(a, b);
	printf("strcpy(a,b): %s\n", a);//로 하면 안됨. 왜냐면 char포인터형 문자열은 내용 변환이 불가하니까!
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
	//오직 첫번째로 word가 나타나는 주소값만을 반환함을 알 수 있음.

	return 0;
}