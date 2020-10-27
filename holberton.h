#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/* -- Prototypes --*/
int _putchar(char c);
int _printf(const char *format, ...);
int prtf_c(va_list valist);
int prtf_s(va_list valist);
int prtf_int(va_list valist);
int prtf_rev(va_list valist);
int prtf_rot(va_list valist);

#endif
