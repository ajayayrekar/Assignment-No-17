//9. Write a C program to sort a string array in ascending order.

#include <stdio.h>
#include <string.h>

int main()
{
    int i, j;
    char str[5][50], temp[50];

    printf("Enter 5 strings: \n");

    for (i = 0; i < 5; i++)
    {
        gets(str[i]);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("Sorted strings: \n");

    for (i = 0; i < 5; i++)
    {
        puts(str[i]);
    }

    return 0;
}
