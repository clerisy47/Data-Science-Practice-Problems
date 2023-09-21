#include<stdio.h>
float power(int x, int y){
    if (y == 0){
        return 1;
    }
    else if ( y >0){
        return x*power(x, y-1);
    }
    else{
        return 1.0/x*power(x,y+1);
    }
}
int main() {
    int base, exponent;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    float result = power(base, exponent);

    printf("%d ^ %d = %f\n", base, exponent, result);

    return 0;
}