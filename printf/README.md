# printf Project

The goal of this project is to create a custom implementation of the `printf` function in C. The `printf` function is used to output a formatted string to the standard output (typically the terminal).

## Requirements

- The function should have the same prototype as the standard `printf` function: `int printf(const char *format, ...)`
- The function should handle the following conversion specifiers: `c`, `s`, `%`
- The function should not handle flag characters, field width, precision, or length modifiers

## Implementation

We will start by creating a new C file called `printf.c`. In this file, we will include the necessary headers, such as `stdio.h` and `stdarg.h`.

Next, we will define the `printf` function. It will take in a format string and a variable number of arguments. The function will use a for loop to iterate through the format string, checking for the `%` character. If the `%` character is found, the function will check the next character to determine which conversion specifier is being used (`c`, `s`, or `%`) and use the appropriate function to handle the argument and print it to stdout.

We will also keep track of the number of characters printed and return this count when the function is finished.

