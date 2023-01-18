String output is handled with the `fputs()`, `puts()`, and `printf()` functions.
The `fputs()` requires the name of the string and a pointer to where you want to print the string. To print to the screen, use `stdout` which refers to the standard output.

###### For Example:

```c
#include <stdio.h>
int main()
{
  char city[40];
  printf("Enter your favorite city: ");
  gets(city);
  // Note: for safety, use
  // fgets(city, 40, stdin);
  fputs(city, stdout);
  printf(" is a fun city.");

  return 0;
} 

```
The `puts()` function takes only a string argument and can also be used to display output. However, it adds a newline to output.

###### For Example:
```c
#include <stdio.h>
int main()
{
  char city[40];
  printf("Enter your favorite city: ");
  gets(city);
  // Note: for safety, use
  // fgets(city, 40, stdin);

  puts(city);

  return 0;
}

```
NOTE:To use `fgets()` you will add `str_len` and `stdin` standard input
