// Complex Number pass by reference

#include <stdio.h>

struct Complex {
    double real;
    double imag;
};

void add_complex(struct Complex *n1, struct Complex *n2, struct Complex *sum){
    sum->real = n1->real + n2->real;
    sum->imag = n1->imag + n2->imag;

};

void multiply_complex(struct Complex *n1, struct Complex *n2, struct Complex *product){
    product->real = n1->real * n2->real - n1->imag * n2->imag;
    product->imag = n1->real * n2->imag + n1->imag * n2->real;
};

int main() {
    struct Complex n1, n2, sum, product;

    // Input for the first complex number
    printf("Enter the first complex number (real imag): ");
    scanf("%lf %lf", &n1.real, &n1.imag);

    // Input for the second complex number
    printf("Enter the second complex number (real imag): ");
    scanf("%lf %lf", &n2.real, &n2.imag);

    add_complex(&n1, &n2, &sum);
    multiply_complex(&n1, &n2, &product);

    // Display results
    printf("\nAddition result: %.2lf + %.2lfi\n", sum.real, sum.imag);
    printf("Multiplication result: %.2lf + %.2lfi\n", product.real, product.imag);

    return 0;
}
