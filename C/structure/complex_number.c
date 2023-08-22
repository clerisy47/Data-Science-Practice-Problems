#include <stdio.h>

struct Complex {
    double real;
    double imag;
};

int main() {
    struct Complex input1, input2, sum, product;

    // Input for the first complex number
    printf("Enter the first complex number (real imag): ");
    scanf("%lf %lf", &input1.real, &input1.imag);

    // Input for the second complex number
    printf("Enter the second complex number (real imag): ");
    scanf("%lf %lf", &input2.real, &input2.imag);

    // Complex number addition
    sum.real = input1.real + input2.real;
    sum.imag = input1.imag + input2.imag;

    // Complex number multiplication
    product.real = input1.real * input2.real - input1.imag * input2.imag;
    product.imag = input1.real * input2.imag + input1.imag * input2.real;

    // Display results
    printf("\nAddition result: %.2lf + %.2lfi\n", sum.real, sum.imag);
    printf("Multiplication result: %.2lf + %.2lfi\n", product.real, product.imag);

    return 0;
}
