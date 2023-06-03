#include <stdio.h>
int main() {
    int data[10];

    printf("Enter elements: ");
    for (int i = 0; i < 10; ++i)
        scanf("%d", data + i);

    printf("You entered: \n");
    for (int i = 0; i < 10; ++i)
        printf("%d\n", *(data + i));
    return 0;
}
