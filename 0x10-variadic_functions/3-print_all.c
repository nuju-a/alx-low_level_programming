#include "variadic_functions.h"

/**
  *print_all - Entry point
  *@*: wild pointer
  *@format: constant argument
  *
  *Return: given format
  */
void print_all(const char * const format, ...)
{
	va_list print;
	const char *p = format;
	const char *s = ", ";
	char *str;

    /*handle null format string*/
	if (!format)
	{
		printf("\n");
		return;
	}

    /*iterate over format string*/
	va_start(print, format);
	while (*p)
	{
		printf("%s", (p != format) ? s : "");

		switch (*p)
		{
			case 'c':
				printf("%c", va_arg(print, int));
				break;
			case 'i':
				printf("%d", va_arg(print, int));
				break;
			case 'f':
				printf("%f", va_arg(print, double));
				break;
			case 's':
				str = va_arg(print, char *);
				printf("%s", str ? str : "(nil)");
				break;
			default:
				break;
		}
		p++;
	}
	printf("\n");
	va_end(print);
}
