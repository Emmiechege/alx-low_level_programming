#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: argument count.
 * @av: argument vector.
 * Return: pointer to concatenated string.
 */
char *argstostr(int ac, char **av)
{
	char *concat_str;
	int cur_position, total_length, i;

	/* first condition given */
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/* calculate the length of the new concatenated string */
	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		/* the arguments plus the newline character */
		total_length += strlen(av[i]) + 1;
	}

	/* allocate memory for the concatenated string */
	concat_str = malloc(sizeof(char) * total_length);
	if (concat_str == NULL) /* if memory allocation fails */
	{
		return (NULL);
	}

	cur_position = 0; /* the beggining of the new string */
	for (i = 0; i < ac; i++) /* loop through each argument */
	{
		/* copy the current argument into the concatenated string */
		strcpy(concat_str + cur_position, av[i]);

		/* move the cursor to the end of the copied argument */
		cur_position += strlen(av[i]);

		/* add a newline after the copied argument */
		concat_str[cur_position] = '\n';

		/* move the cursor to the next argument */
		cur_position++;
	}
	concat_str[cur_position] = '\0'; /* add null terminator */
	return (concat_str);
}
