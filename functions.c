#include <stdarg.h>
#include "holberton.h"

/**
 * print_character - Function
 * Prints a character
 * @ch: Character
 * Return: Nothing for now
 */

int print_character(va_list ch)
{
	int counter = 0;

	_putchar(va_arg(ch, int));
	counter++;

	return (counter);
}

/**
 * print_string - Function
 * Prints an array of characters
 * @str: String
 * Return: Nothing for now
 */

int print_string(va_list str)
{
	int counter = 0;
	char *string = va_arg(str, char *);
	char *null_pointer = "(null)";

	if (string == NULL || string == 0)
	{
		while (*null_pointer)
		{
			_putchar(*null_pointer);
			null_pointer++;
			counter++;
		}
	}
	else
	{
		while (*string)
		{
			_putchar(*string);
			counter++;
			string++;
		}
	}

	return (counter);
}

/**
 * print_percentage - Function
 * Prints percentage character
 * @c: Character
 * Return: Nothing for now
 */

int print_percentage(char c)
{
	int counter = 0;

	if (c == '%')
	{
		_putchar('%');
		counter++;
	}
	else
	{
		_putchar('%');
		counter++;
		_putchar(c);
		counter++;
	}
	return (counter);
}

/**
 * print_integers - Function
 * Prints integer numbers
 * @integer: Integer
 * Return: Nothing for now
 */

int print_integers(va_list integer)
{
	int index, counter = 0, number, length;

	number = va_arg(integer, int);
	index = 1;
	length = 1;

	if (number / (1000000000) != 0)
		length = 1000000000;
	else
	{
		while (number / index != 0)
		{
			length = index;
			index = index * 10;
		}
	}
	if (number < 0)
	{
		_putchar('-');
		counter++;
		while (length > 0)
		{
			_putchar('0' + ((number / length) * -1));
			counter++;
			number = number % length;
			length = length / 10;
		}
	}
	else
	{
		while (length > 0)
		{
			_putchar('0' + (number / length));
			counter++;
			number = number % length;
			length = length / 10;
		}
	}
	return (counter);
}
