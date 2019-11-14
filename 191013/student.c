#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[20];
	int score;
}Student;

int main(void) {
	FILE *fp = fopen("input.txt", "r");
	int n, sum=0;
	int i;

	fscanf(fp, "%d", &n);

	Student *students = (Student*)malloc(sizeof(Student)*n);

	for (i = 0; i < n; i++) {
		fscanf(fp,"%s", (students+i)->name);
		fscanf(fp,"%d", &(students+i)->score);
		sum += (students + i)->score;
	}

	for (i = 0; i < n; i++) {
		printf("Name: %s\n", students[i].name);
		printf("Score: %d\n\n", students[i].score);
	}
	free(students);
	fclose(fp);
	printf("Average Score: %.2f", (double)sum / n);

	return 0;
}