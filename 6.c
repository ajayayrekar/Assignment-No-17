//6. Write a program to reverse a string.
#include <stdio.h>
#define MAX_LENGTH 100

void reverse_string(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str[MAX_LENGTH];
    printf("Enter a string: ");
    scanf("%s", str);
    reverse_string(str);
    printf("Reversed: %s\n", str);
    return 0;
}
