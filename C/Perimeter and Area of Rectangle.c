#include <stdio.h>

int areaRectangle(int, int);

int main()
{
    int l, b, perimeter, area;
    printf("Enter the length : ");
    scanf("%d", &l);

    printf("Enter the breadth : ");
    scanf("%d", &b);

    perimeter= perimeterRectangle(l, b);
    area = areaRectangle(l, b);
 
    printf("The perimeter of the rectangle : %d", perimeter);
    printf("\nThe area of the rectangle : %d", area);

    return 0;
}

int areaRectangle(int length, int breadth)
{
    return length * breadth;
}
int perimeterRectangle(int length, int breadth)
{
    return 2 * (length + breadth);
}