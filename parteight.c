#include <stdio.h>

int reverseStringUnsingPointer(char *input, char *output) {
    int length = strlen(input);
    char *start = input;
    char *end = input + length - 1;
    for(int i = 0; i < length; i++) {
        *(output + i) = *end;
        end--;
    }
    *(output + length) = '\0';
}

int main() {
    char inputString[100] , reverseString[100];
    printf("Nhap vao mot chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);
    size_t len = strlen(inputString);
    if (len > 0 && inputString[len - 1] == '\n') {
        inputString[len - 1] = '\0';
    } 
    reverseStringUnsingPointer(inputString, reverseString);
    printf("Chuoi ban dau: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n",reverseString);

    return 0;
}



    

