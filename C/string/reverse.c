// Reverse a string

#include <stdio.h>
#include <string.h>

void my_strrev(char str1[])  
{  
    static int i=0, len;   // Static so that value of i remains same throughout the recursion
    char temp;
    len = strlen(str1);

    // With Recursion
    if (i>len/2)
        return;
    else{  
        temp = str1[i];  
        str1[i] = str1[len - 1- i ];  
        str1[len - i - 1] = temp;  
        i++;  
        my_strrev(str1);
    }  
    
    // Without Recrusion
    // for (i = 0; i < len/2; i++){  
    //     temp = str1[i];  
    //     str1[i] = str1[len - 1 - i];  
    //     str1[len - i - 1] = temp;  
    // }  
}  

int main() {
    char input[100];

    printf("Enter a word: ");
    scanf("%s", input);

    my_strrev(input);

    printf("Reversed word: %s\n", input);

    return 0;
}
