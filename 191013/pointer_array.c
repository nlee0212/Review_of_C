#include <stdio.h>

int main(void) {
	/*
	int a = 10;
	int b[10];

	b = &a;
	*/

	int a[5] = { 1,2,3,4,5 };
	int *b = a;//int *b = &a[0];이라 해도 결과는 동일. 배열의 이름은 배열의 첫번째 원소의 주소값과 같기 때문!
	int i;

	//printf("%d", b[2]);

	for (i = 0; i < 5; i++) {
		printf("%d ", a + i);//자료형인 int의 크기만큼 주소값이 변함을 보여줌.
	}
	printf("\n");
	for (i = 0; i < 5; i++) {
		printf("%d ", *(a + i));//주소가 가리키는 값을 출력
	}

	return 0;
}