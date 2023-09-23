#include<stdio.h>
struct Person
{
    char name[50];
    char address[50];
    float salary;
};
void increase(struct Person *person){
    person->salary += 0.15*person->salary;
}
int main(){
    struct Person person[5];
    int i;
    for(i=0; i<5; i++){
        printf("\nEnter the name of person %d: ", i+1);
        scanf("%s", person[i].name);
        printf("\nEnter the address of person %d: ", i+1);
        scanf("%s", person[i].address);
        printf("\nEnter the salary of person %d: ", i+1);
        scanf("%f", &person[i].salary);
    }
    for(i=0; i<5; i++){
        increase(&person[i]);
    }
    printf("\nAfter salary increase: ");
    for(i=0; i<5; i++){
        printf("\nThe name of person %d: ", i+1);
        printf("%s", person[i].name);
        printf("\nThe address of person %d: ", i+1);
        printf("%s", person[i].address);
        printf("\nThe salary of person %d: ", i+1);
        printf("%f", person[i].salary);
    }
}
