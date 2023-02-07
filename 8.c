//8. Write a program in C to copy one string to another string.

#include <stdio.h>
#include <string.h>

int main()
{
    char source[100], destination[100];

    printf("Enter a source string: ");
    gets(source);

    strcpy(destination, source);

    printf("Destination string: %s\n", destination);

    return 0;
}
