// Sort student data on the order of their name

#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
    char address[100];
    char phoneNumber[15];
};

void swap(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

void sortByName(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(students[j].name, students[j + 1].name) > 0) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

void inputStudentInfo(struct Student *student) {
    printf("Roll Number: ");
    scanf("%d", &student->rollNumber);
    printf("Name: ");
    scanf("%s", student->name);
    printf("Address: ");
    scanf("%s", student->address);
    printf("Phone Number: ");
    scanf("%s", student->phoneNumber);
}

void displayStudentInfo(struct Student student) {
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Name: %s\n", student.name);
    printf("Address: %s\n", student.address);
    printf("Phone Number: %s\n\n", student.phoneNumber);
}

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        inputStudentInfo(&students[i]);
    }

    sortByName(students, n);

    printf("\nStudents sorted by name:\n");
    for (int i = 0; i < n; i++) {
        displayStudentInfo(students[i]);
    }

    return 0;
}
