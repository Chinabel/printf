#include "main.h"

/**
 * print_flags - Calculates active flags
 * @format: Formatted string in which to print the arguments
 * @i: takes a parameter
 * Return: Flags
 */

int print_flags(const char *format, int *i)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8  16 */
	int j, n;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (n = *i + 1; format[n] != '\0'; n++)
	{
		for (j = 0; FLAGS_CH[j] != '\0'; j++)
			if (format[n] == FLAGS_CH[j])
			{
				flags |= FLAGS_ARR[j];
				break;
			}

		if (FLAGS_CH[j] == 0)
			break;
	}
	*i = n - 1;
	return (flags);
}
