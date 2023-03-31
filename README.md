
# _printf() Function and Related Files

This repository contains the source code for a custom implementation of the printf() function in C, called _printf(). This function works the same as the standard printf() function, allowing users to print formatted text to the console.

The _printf() function is defined in the printf.c file, and its associated helper functions are defined in the print_function.c file. The main.h header file defines the function prototypes for all the functions used in the _printf() implementation.

## Compilation

To compile the code on your own machine, kindly

- Clone the code from this repository using `git clone git@github.com:issaevis/holbertonschool-printf.git`
- Compile the code using `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o printf`

## Usage/Examples

To use the _printf() function, include the main.h header file in your C program, then call the function with the desired format specifier and any optional arguments.

For example, to print a string to the console, you would call _printf() with the %s format specifier and a pointer to the string you want to print:

```C++
#include "main.h"
int main(void)
{
    char *str = "Hello, world!";
    _printf("%s\n", str);
    return (0);
}
```
This would print the following text to the console:

```
Hello, world!
```

For more information you can check the man page using the following command:
```
$ man ./_printf
```
## Suported Format Specifiers

The _printf() function supports the following format specifiers:

- %c: Prints a single character.
- %s: Prints a null-terminated string.
- %i or %d: Prints a signed integer.
- %%: Prints a literal "%" character.

Any other format specifiers will be printed as literal characters.

## Files

- printf.c: Defines the _printf() function and contains the main logic for processing format specifiers and calling the appropriate helper functions.
- print_function.c: Defines the helper functions for each supported format specifier, including p_char(), p_str(), and p_int().
- main.h: Defines the function prototypes for all functions used in the _printf() implementation.

## Dependencies

This implementation of _printf() uses the following standard C libraries:

- stddef.h: Defines several macros and types used in other standard library headers.
- stdarg.h: Defines a variable argument list and the macros used to parse them.

You must have a `C` compiler installed on your own machine. All tests are made on a `Ubuntu 20.04` using `gcc` as the compiler

## Contributing

The code is tested with various floating-point numbers, integers, strings, and characters, ensuring that the output is accurate and reliable for all scenarios.

If you encounter a bug, or a problem, kindly let me know. This repository is open for contributions. If you would like to contribute, please create a pull request and follow the code style of the existing code.

# Authors

- [Akil Kabellari](https://github.com/akka97)
- [Evis Topollaj](https://github.com/issaevis)
