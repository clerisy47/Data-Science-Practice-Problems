// Stores data of employees and displays deatils of manager

#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    float salary;
    char post[50];
};

int main() {
    struct Employee employees[10];

    FILE *file = fopen("employee.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Post: ");
        scanf("%s", employees[i].post);
    }

    fwrite(employees, sizeof(employees[0]), 10, file);
    fclose(file);

    file = fopen("employee.dat", "rb");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nEmployees with the post of 'manager':\n");
    fread(employees, sizeof(employees[0]), 10, file);
    for (int i = 0; i < 10; i++) {
        if (strcmp(employees[i].post, "manager") == 0) {
            printf("Name: %s\n", employees[i].name);
            printf("Salary: %.2f\n", employees[i].salary);
            printf("Post: %s\n", employees[i].post);
            printf("\n");
        }
    }

    fclose(file);

    return 0;
}
