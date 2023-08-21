#include <stdio.h>

int main() {
    int m, n, arr[10][10];
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter %d x %d elements:\n", m,n);
    for (int i = 0; i < m; i++) {
        for(int j = 0; j<n; j++){
            scanf("%d", *(arr + i)+j);
        }
    }

    printf("Array elements accessed using pointers:\n");
    for (int i = 0; i < m; i++) {
        for(int j = 0; j<n; j++){
        printf("Element %d %d: %d\n", i, j, *(*(arr + i)+j));
        }
    }

    return 0;
}
