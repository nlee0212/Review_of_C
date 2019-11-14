#include <stdio.h>
#include <string.h>

typedef struct Student {
	char studentID[10];
	char name[10];
	int grade;
	char major[100];
}Student;
//struct Student{~~~~}��ü�� Student ��� �ڷ��� �̸��� �����ϰԲ� ����� �ִ� ���� typedef!	

int main(void) {
	Student s;//����ü�� ������ ������ ��.
	strcpy(s.studentID, "20171662");
	strcpy(s.name, "Na Yeon");
	s.grade = 3;
	strcpy(s.major, "Computer Science");
	//s={"20171662", "Na Yeon", 3, "Computer Science"};�� �Ѳ����� �ʱ�ȭ�� ����.

	printf("ID: %s\n", s.studentID);
	printf("Name: %s\n", s.name);
	printf("Grade: %d\n", s.grade);
	printf("Major: %s\n", s.major);

	Student *sp = (Student*)malloc(sizeof(Student));//����ü ������ �����ͷ� �����Ͽ��� �ÿ� '.'��� '->'���.
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