// P
// PU
// PUL
// PULC
// PULCH
// PULCHOW
// PULCHOWK

#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "PULCHOWK";
    int length = strlen(word);

    for (int i = 0; i < length; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c", word[j]);
        }
        printf("\n");
    }

    return 0;
}
