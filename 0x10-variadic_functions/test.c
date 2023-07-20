#include <stdarg.h>

int sum_them_all(int *p, const int K, char team, ...)
{
	va_list all;

	va_start(all, team);//takes 2 parameter object va_list and name of last parameter
	int i;

	for (i =0; i < n, i++)
	{
		sum += va_arg(all, char)//takes 2 parameter object of va_list and the type descriptor
	}
	va_end(all);
}
