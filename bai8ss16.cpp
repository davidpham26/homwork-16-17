#include <stdio.h>
#include <string.h>

void reverseString(char *input, char *output) {
    int length = strlen(input);
    for (int i = 0; i < length; i++) {
        output[i] = input[length - i - 1];
    }
    output[length] = '\0';
}

int main() {
    char inputString[100];
    char reverseString[100];

    printf("Nhap vao mot chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Loai bo ky tu xuong dong neu co
    inputString[strcspn(inputString, "\n")] = '\0';

    reverseString(inputString, reverseString);

    printf("Chuoi goc: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);

    return 0;
}

