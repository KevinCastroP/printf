#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_char - print strings
 *@list: the list
 *Return: char count
 */

int print_char(va_list *list)
{
	int k;

	k = va_arg(*list, int);
	_put(k);
	return (1);
}
