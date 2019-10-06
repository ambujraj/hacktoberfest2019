#include<stdio.h>
#include <locale.h>
#define SIZE 9999

int prime(int first, int last, int *vetor) {
  int num, i, result = 0;
  int size = ((last - 1) - first);
  int j = 0, k = 0;

  for(i = (first + 1), j = 0; i < size; i++) {
    result = 0;
    num = i;

    for (k = 2; k <= num / 2; k++) {
       if (num % k == 0) {
          result++;
          break;
       }
    }

    if (result == 0) {
      vetor[j] = i;
      printf("%i\n", i);
      j++;
    }
  }//for1

}//prime

int main() {
 setlocale(LC_ALL, "");
 int first, last, i;
 int primes[SIZE];
 int size;

 printf("Type the first number of the interval:\n");
 scanf("%d", &first);
 printf("Type the last number of the interval:\n");
 scanf("%d", &last);

 prime(first, last, primes);

 return 0;
}
