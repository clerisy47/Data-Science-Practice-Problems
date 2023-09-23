// Stores data of students
#include<stdio.h>
struct Students
{
    char name[31];
    int roll;
    int age;
};
int main(){
    struct Students students[50], data[50];
    int i;
    FILE *file;
    for(i=0; i<5; i++){
        printf("\nEnter the name of student %d ", i+1);
        scanf("%s", students[i].name);
        printf("\nEnter the roll number of student %d ", i+1);
        scanf("%d", &students[i].roll);
        printf("\nEnter the age of student %d ", i+1);
        scanf("%d", &students[i].age);
    }
    file = fopen("STUDENT.DAT","wb");
    if (file == NULL) {
        printf("Error writing file");
        return 1;
    }
    fwrite(students,sizeof(students[0]),5,file);
    fclose(file);
    file = fopen("STUDENT.DAT","rb");
    fread(data, sizeof(data[0]), 5, file);
    for(i=0; i<5; i++){
        printf("\nName: %s, Roll number: %d, Age: %d", data[i].name, data[i].roll, data[i].age);
    }
    return 0;
}