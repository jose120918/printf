# Printf

---

## Making a mini version of the Printf function

_printf
A function that produces output according to a format

Prototype: int _printf(const char *format, ...);

Handles the following conversion specifiers:

* c - character
* s - string
* d - decimal
* i - integer
* % - percentage sign

---

## Command tests 

Create a main with like this:
#include <limits.h>
#include <stdio.h>
#include "holberton.h"
int main (void)
{
		_printf(hello_%c, "world");
}
then run this command:

`$ gcc -Wall -Wextra -Werror -pedantic -Wno-format main.c *.c -o printf `

---

## Example:sleepy:

`_printf("hello_%c",'w');`

`Output : "hello_w"`

---

## Authors :copyright:

* **Sebastian Paruma** - [Github](https://github.com/sebastianparuma)
* **Luisa Asprilla** - [Github](https://github.com/luisauribe)
* **Jose Muñoz** - [Github](https://github.com/jose120918)
