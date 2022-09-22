#include <stdio.h>

// Fibonacci - for
int main()
{
  long int number, aux_1 = 1, aux_2 = 1, aux_3;

  printf("Type a number: ");
  scanf("%d", &number);

for (int i=2; i<number; i++){
  aux_3 = aux_1;
  aux_1 +=aux_2;
  aux_2 = aux_3;
 }

 printf("%ldº Fibonacci number: %ld\n\n", number, aux_1);

 return 0;
}
