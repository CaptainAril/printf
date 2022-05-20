#include <stdio.h>

void print(int n)
{
  if (n < 0)
    {
      putchar('-');
      n = -n;
    }
  if (n/10)
    {
      print(n/10);
    }

  putchar((n % 10) + '0');
}

int main(void)
{
  int n;
  n = 7656453;
  
  print(n);
  return (0);
}
