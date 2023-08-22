#include <stdio.h>
#include <string.h>

void reverseWord(char word[], int start, int end) {
    if (start >= end) {
        return; 
    }
    
    char temp = word[start];
    word[start] = word[end];
    word[end] = temp;
    
    reverseWord(word, start + 1, end - 1);
}

int main() {
    char input[100];

    printf("Enter a word: ");
    scanf("%s", input);

    int length = strlen(input);
    reverseWord(input, 0, length - 1);

    printf("Reversed word: %s\n", input);

    return 0;
}
