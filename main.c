#include <stdio.h>
#include "fib.h"

// Fibonacci - recursivo
int main()
{
  unsigned int number;

  printf("Type a number: ");
  scanf("%d", &number);

  printf("%dº Fibonacci number: %d\n\n", number, fib(number));

 return 0;
}


