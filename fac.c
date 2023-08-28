#include "factor.h"

/**
 * custom_factorize - The function factorizes a number
 * @custom_buffer: pointer to the address of the number
 *
 * Author: Custom Author
 * Return: int
 */
int custom_factorize(char *custom_buffer)
{
	u_int32_t custom_num;
	u_int32_t custom_i;

	custom_num = atoi(custom_buffer);

	for (custom_i = 2; custom_i < custom_num; custom_i++)
	{
		if (custom_num % custom_i == 0)
		{
			printf("%d=%d*%d\n", custom_num, custom_num / custom_i, custom_i);
			break;
		}
	}

	return (0);
}
