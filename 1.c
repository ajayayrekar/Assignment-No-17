//1. Write a program to calculate the length of the string. (without using built-in method)

#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  int i, length = 0;

  printf("Enter a string: ");
  gets(str);

  for (i = 0; str[i] != '\0'; i++) {
    length++;
  }

  printf("Length of the given string: %d", length);
  return 0;
}
