#include <stdio.h>

void print(unsigned int n)
{
  if (n > 1)
    {
      print(n/2);
    }

  printf("%d", n % 2);
  //  putchar('\n');
}

int main(void)
{
  
  print(0);
  printf("\n");
  printf("%d\n", 0765434);
  printf("%i\n", -0765434);
  return (0);
}
