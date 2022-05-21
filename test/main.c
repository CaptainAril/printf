#include "main.h"
#include <stdio.h>

int main(void)
{
  _printf("Hello World %c 2022\n", '-');
  printf("Hello World %c 2022\n", '-');

  _printf("My name is %s\n", "John");
  printf("My name is %s\n", "John");

  _printf("%% testing %% %c, %% testing %% %s\n", 'a', "Oops, too many %s");
  printf("%% testing %% %c, %% testing %% %s\n", 'a', "Oops, too many %s");

  _printf("Today's date is: %d/%d/%d\n", 21, 05, 2022);
  printf("Today's date is: %d/%d/%d\n", 21, 05, 2022);

  _printf("A %i times I have felt like giving up; A %d times I never did\n", 100, 100);
  printf("A %i times I have felt like giving up; A %d times I never did\n", 100, 100);

  _printf("%d in base two (binary) is: %b\n", 11, 11);

  return (0);
}
