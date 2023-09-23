// Cos Function approximation using Taylor Series

#include<stdio.h>
float power(float x, float y){
    if (y == 0){
        return 1;
    }
    else if ( y >0){
        return x*power(x, y-1);
    }
    else{
        return 1.0/(x*power(x,y+1));
    }
}
float facto(float n) {
    if (n<=1)
        return 1;
    else
        return n*facto(n-1);
}
int main(){
    float i, n, x, sum=0;
    printf("Enter the number of precision: ");
    scanf("%f",&n);
    printf("Enter the value of x: ");
    scanf("%f", &x);
    x = x*3.1415/180;
    for(i=0; i<n; i++){
        sum += power(-1, i)*power(x, 2*i)/facto(2*i);
    }
    printf("%f", sum);
    return 0;
}