#include <stdio.h>
#include <string.h>

typedef struct Student {
	char studentID[10];
	char name[10];
	int grade;
	char major[100];
}Student;
//struct Student{~~~~}전체를 Student 라는 자료형 이름에 저장하게끔 만들어 주는 것이 typedef!	

int main(void) {
	Student s;//구조체의 변수를 선언해 줌.
	strcpy(s.studentID, "20171662");
	strcpy(s.name, "Na Yeon");
	s.grade = 3;
	strcpy(s.major, "Computer Science");
	//s={"20171662", "Na Yeon", 3, "Computer Science"};로 한꺼번에 초기화도 가능.

	printf("ID: %s\n", s.studentID);
	printf("Name: %s\n", s.name);
	printf("Grade: %d\n", s.grade);
	printf("Major: %s\n", s.major);

	Student *sp = (Student*)malloc(sizeof(Student));//구조체 변수를 포인터로 선언하였을 시엔 '.'대신 '->'사용.
	strcpy(sp->studentID, "20171662");
	strcpy(sp->name, "Na Yeon");
	sp->grade = 3;
	strcpy(sp->major, "Computer Science");

	printf("ID: %s\n", sp->studentID);
	printf("Name: %s\n", sp->name);
	printf("Grade: %d\n", sp->grade);
	printf("Major: %s\n", sp->major);

	return 0;
}