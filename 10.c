//10. Write a program in C to Find the Frequency of Characters.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int count[256] = {0};
    int i, len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        count[str[i]]++;
    }

    for (i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            printf("'%c' appeared %d times.\n", (char)i, count[i]);
        }
    }

    return 0;
}
