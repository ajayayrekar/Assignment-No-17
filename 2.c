//2. Write a program to count the occurrence of a given character in a given string.

#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  char ch;
  int i, count = 0;

  printf("Enter a string: ");
  gets(str);
  printf("Enter a character to find its frequency: ");
  scanf("%c", &ch);

  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] == ch) {
      count++;
    }
  }

  printf("Frequency of %c = %d", ch, count);
  return 0;
}
