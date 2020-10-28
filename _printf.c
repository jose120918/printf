#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - Function
 * Prints characters and strings formatted.
 * @format: Types of arguments to the function.
 * Return: Number of characters.
 */

int _printf(const char *format, ...)
{
	va_list arguments;
	int (*print_functions)(va_list);
	int index = 0, i, counter = 0, character = 0;

	formater array[] = {{'c', print_character},
			    {'s', print_string},
			    {'d', print_integers},
			    {'i', print_integers},
			    {'\0', NULL},
	};

	if (format == NULL || (format[index] == '%' && format[index + 1] == '\0'))
		return (-1);

	va_start(arguments, format);

	while (format[index] != '\0')
	{
		if (format[index] != '%')
		{
			_putchar(format[index]);
			counter++;
		}

		else
		{
			index++;
			for (i = 0; i < 4; i++)
			{
				if (format[index] == array[i].sign)
				{
					print_functions = array[i].function_pointer;
					character = print_functions(arguments);
					counter += character;
					break;
				}
			}
			if (i == 4)
			{
				character = print_percentage(format[index]);
				counter += character;
			}
		}
		index++;
	}
	va_end(arguments);
	return (counter);
}
