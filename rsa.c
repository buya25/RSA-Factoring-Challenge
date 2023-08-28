#include "factor.h"

/**
 * custom_main - main function
 *
 * Author: Custom Author
 * Return: void
 */
int custom_main(int custom_argc, char *custom_argv[])
{
	FILE *custom_fptr;
	size_t custom_count;
	ssize_t custom_line;
	char *custom_buffer = NULL;

	if (custom_argc != 2)
	{
		fprintf(stderr, "Usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}
	custom_fptr = fopen(custom_argv[1], "r");
	if (custom_fptr == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", custom_argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((custom_line = getline(&custom_buffer, &custom_count, custom_fptr)) != -1)
	{
		custom_factorize(custom_buffer);
	}
	return (0);
}
