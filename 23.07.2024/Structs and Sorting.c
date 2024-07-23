#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[100];
    int age;
    float gpa;
} Student;

int compare(const void *a, const void *b) {
    Student *studentA = (Student *)a;
    Student *studentB = (Student *)b;

    if (studentA->gpa < studentB->gpa) {
        return 1;
    } else if (studentA->gpa > studentB->gpa) {
        return -1;
    } else {
        return strcmp(studentA->name, studentB->name);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].gpa);
    }

    qsort(students, n, sizeof(Student), compare);

    for (int i = 0; i < n; i++) {
        printf("%s %d %.2f\n", students[i].name, students[i].age, students[i].gpa);
    }

    return 0;
}
