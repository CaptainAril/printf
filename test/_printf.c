#include "main.h"
#include <stdarg.h>
#include <stddef.h>

void printnumber(int n)
{
  if (n < 0)
    {
      _putchar('-');
      n = -n;
    }
  if (n/10)
    {
      printnumber(n/10);
    }
  _putchar(n%10 + '0');
}
void print_bin(unsigned int n)
{
  if (n > 1)
    {
      print_bin(n/2);
    }

  _printf("%d", n % 2);
}

int _printf(const char *format, ...)
{
  va_list args;
  char *str;
  int char_printed, i, j, num;
  char_printed = 0;
  i = 0;
  str = NULL;

  va_start(args, format);
  while (format[i] != '\0')
    {
      if (format[i] == '%')
	{
	  if (format[i+1] == 'c')
	    {
	      _putchar(va_arg(args, int));
	      i++;
	      char_printed++;
	    }
	  else if (format[i+1] == 's')
	    {
	      str = va_arg(args,char *);
	      j = 0;
	      while (str[j] != '\0')
		{
		  _putchar(str[j]);
		  j++;
		  char_printed++;
		}
	      i++;
	    }
	  else if (format[i+1] == '%')
	    {
	      _putchar('%');
	      i++;
	      char_printed++;
	    }
	  else if (format[i+1] == 'd')
	    {
	      num = va_arg(args, int);
	      printnumber(num);
	      i++;
	    }
	  else if (format[i+1] == 'i')
	    {
	      num = va_arg(args, int);
	      printnumber(num);
	      i++;
	    }
	  else if (format[i+1] == 'b')
	    {
	      /*  bin = va_arg(args, unsigned int);*/
	      print_bin(va_arg(args, unsigned int));
	      i++;
	    }
	}
      else
	{
	  _putchar(format[i]);
	  char_printed++;
	}
      i++;
    }

  va_end(args);
  return (char_printed);
}
