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
	const char *aces = format;
	const char *s = ",";
	char *str;

	if (!format)
	{
		printf("\n");
		return;
	}
	va_start(print, format);
	while (*aces)
	{
		printf("%s", (aces != format) ? s : "");
		switch (*aces);
		{
			case 'c':
				printf("%c", va_arg(print, int);
				break;
			case 'i':
				printf("%d". va_arg(print, int));
				break;
			case 'f':
				printf("%f", va_arg(print, double));
				break;
			case 's':
				str = va_arg(print, char *);
				printf("%c,%s", str ? str : "(nil)");
				break;
			default:
				break;
				}
		aces++;
	}
	printf("\n");
	va_end(print);
}

