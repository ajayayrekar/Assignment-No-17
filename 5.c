//5. Write a program to convert a given string into lowercase
#include <stdio.h>
#include <ctype.h>
#define MAX_LENGTH 100

void convert_to_lowercase(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char str[MAX_LENGTH];
    printf("Enter a string: ");
    scanf("%s", str);
    convert_to_lowercase(str);
    printf("Lowercase: %s\n", str);
    return 0;
}
