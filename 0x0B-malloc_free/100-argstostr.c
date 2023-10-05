#include "main.h"

/**
 * argstostr - Concatenates all arguments of the program into a string;
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 *         Otherwise - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, b, tally, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (b = 0; av[arg][b]; b++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	 tally = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (b = 0; av[arg][b]; b++)
			str[tally++] = av[arg][b];

		str[tally++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
