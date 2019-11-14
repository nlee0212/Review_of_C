#include <stdio.h>

void myFunction() {
	printf("A\n");
}

void yourFunction() {
	printf("B\n");
}

int main(void) {
	void(*fp)() = myFunction;//반환자료형(*이름)(매개변수)=함수명;-> fp에 myFunction의 주소값이 들어간 것.
	fp();
	fp = yourFunction;//fp에 yourFunction의 주소값이 들어간 것.
	fp();

	return 0;
}