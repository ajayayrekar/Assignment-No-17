//3. Write a program to count vowels in a given string
#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  int i, vowels = 0;

  printf("Enter a string: ");
  gets(str);

  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
        str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
        str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
        str[i] == 'U') {
      vowels++;
    }
  }

  printf("Number of vowels in the given string: %d", vowels);
  return 0;
}
