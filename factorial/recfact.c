#include <stdio.h>

int factorial(int n){
  if(n==0)return 1;
  return factorial(n-1)*n;
}

int main(){
  int n;
  printf("Insert an integer number: ");
  scanf("%d", &n);
  printf("The factorial of %d is %d.\n", n, factorial(n));
  return 0;
}
