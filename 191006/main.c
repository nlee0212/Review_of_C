#include <stdio.h>

int main(void) {
	char *a = "Hello World!";//컴파일러가 "Hello World"라는 문자열을 읽기 전용으로 메모리 공간에 저장한 후, *a에 해당 메모리의 주소값을 대입하는 방식
	//이를 '문자열 리터럴'방식이라 함.

	printf("a가 가리키는 문자열: %s\n", a);
	printf("*a가 가리키는 주소값: %d\n", a);

	/*
	*a = "I'm Na Yeon.";

	printf("a가 가리키는 문자열: %s\n", a);
	printf("*a가 가리키는 주소값: %d\n", a);
	*/
	//위에 처럼 하면 안 됨! a가 가리키는 문자열을 바꾸어주고 싶다면, 다른 주소값을 넣어 주어야 함. 선언할 때만 위에꺼처럼 가능한 듯.

	char *b = "I'm Na Yeon.";
	a = b;//*a = *b는 a[0]=b[0]으로도 생각할 수 있는데, a의 내용은 바꿀 수 없기 때문에 컴파일은 되지만 아래 printf는 되지 않는다.

	printf("a가 가리키는 문자열: %s\n", a);
	printf("*a가 가리키는 주소값: %d\n", a);

	return 0;
}