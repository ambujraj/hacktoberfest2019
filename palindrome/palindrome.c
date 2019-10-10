// Author: [Phyllipe Bezerra](https://github.com/pmba)

#include <stdio.h>
#include <string.h>

char *strrev(char *str);

int main() {
    printf("Input: ");
    char str[100], rev[100];

    scanf("%s", str);

    strcpy(rev, str);
    strrev(rev);

    printf("%s %s\n", str, !strcmp(rev, str) ? "is a palindrome" : "isn't a palindrome");

    return 0;
}

char *strrev(char *str) {
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}