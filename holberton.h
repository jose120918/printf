#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>

/**
 * struct identifier - Structure that define the signs
 * @sign: Conversion especifier
 * @function_pointer: Function pointer
 */

typedef struct identifier
{
	char sign;
	int (*function_pointer)(va_list);
} formater;

int _putchar(char c);
int _printf(const char *format, ...);
int print_character(va_list ch);
int print_string(va_list str);
int print_integers(va_list integer);
int print_percentage(char c);

#endif
