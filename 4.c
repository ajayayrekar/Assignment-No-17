//4. Write a program to convert a given string into uppercase

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char str[100];
  int i;

  printf("Enter a string: ");
  gets(str);

  for (i = 0; str[i] != '\0'; i++) {
    str[i] = toupper(str[i]);
  }

  printf("Uppercase string: %s", str);
  return 0;
}
