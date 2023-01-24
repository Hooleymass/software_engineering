# 0. Preprocessor

Write a script that runs a C file through the preprocessor and save the result into another file.

The C file name will be saved in the variable `$CFILE`
The output should be saved in the file `c`

***solution:

```c
#!/bin/bash
gcc -E $CFILE -o c
```
This script uses the `gcc` command with the `-E` option to run the preprocessor on the file passed in the `$CFILE` variable. The output is then redirected to the file named `'c'`


# 1. Compiler

Write a script that compiles a C file but does not link.

 - The C file name will be saved in the variable `$CFILE`
 - The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.
 
       - Example: if the C file is `main.c`, the output file should be `main.o`

***solution:

```c
#!/bash/bin
gcc -c $CFILE
```

This script uses the `gcc` command with the `-c` option which tells the compiler to stop after the preprocessing and compilation stages, but before the linking stage.

By using the `-c` option, we are telling the compiler to generate an object file (.o) containing the compiled code, but not to link it with other object files to create an executable.


# 2. Assembler

Write a script that generates the assembly code of a C code and save it in an output file.

 - The C file name will be saved in the variable $CFILE
 - The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
       - Example: if the C file is main.c, the output file should be `main.s`

***solution:

```c
#!/bin/bash
gcc -S $CFILE
```

# 3. Name

Write a script that compiles a C file and creates an executable named `cisfun`.

The C file name will be saved in the variable $CFILE

***solution:

```c
#!/bin/bash
gcc -o cisfun $CFILE
```

This script uses the `gcc` command to compile the C file passed in the $CFILE variable, and the -o option specifies the output file name as cisfun.

You can run this script in the command-line by providing the C file name to the CFILE variable before running the script





# 4. Hello, puts

Write a C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.

 - Use the function `puts`
 - You are not allowed to use `printf`
 - Your program should end with the value `0`


```c
#include <stdio.h>

/**
* main - use the function puts
* 
* Return: 0
*/

int main(void)
{
        puts("\"Programming is like building a multilingual puzzle\n");
        return 0;
}

```

This is a C program that uses the `puts` function to print a sentence `"Programming is like building a multilingual puzzle"` to the console. The `#include <stdio.h>` is a preprocessor directive that includes the standard input/output library. `puts` function automatically appends a newline character to the end of the string, the program uses this function to print the sentence and a new line character to the console. Finally, the program returns 0 from the `main` function to indicate that the program has completed successfully.


# 5. Hello, printf

Write a C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.

    - Use the function `printf`
    - You are not allowed to use the function `puts`
    - Your program should `return 0`
    - Your program should compile without warning when using the `-Wall` `gcc` option


```c
#include <stdio.h>

/**
* main - use the function printf
* 
* Return: 0
*/
int main(void)
{
         printf("with proper grammar,
 but the outcome is a piece of art,\n");
         return 0;
}

```

It is similar to `puts` function the only difference is:
      1. `puts` is used to output a string of characters followed by a newline character, while `printf` is used to output a formatted string.
      2. `puts` automatically appends a newline character ('\n') to the end of the string, while `printf` does not automatically append a newline character.
      3. `printf` is more powerful than `puts` as it can be used to print formatted text, numbers, characters, and even custom data types using format specifiers.






# 6. Size is not grandeur, and territory does not make a nation

Write a C program that prints the size of various types on the computer it is compiled and run on.

You should produce the exact same output as in the example
Warnings are allowed
Your program should return 0
You might have to install the package ` libc6-dev-i386` on your Linux to test the `-m32 gcc` option

```c
#include <stdio.h>
/**
* main - print size of various types on the computer
* 
* Return: 0
*/

int main(void){
        char c;
        int i;
        long l;
        long long ll;
        float k;

        printf("Size of a char: %u\n", (unsigned long)sizeof(c));
        printf("Size of an int: %u\n", (unsigned long)sizeof(i));
        printf("Size of a long: %u\n", (unsigned long)sizeof(l));
        printf("Size of a long long: %u\n", ,(unsigned long)sizeof(ll));
        printf("Size of a float: %u\n",(unsigned long)sizeof(k));
        return 0;

}

```

you can use either: `%lu`, `%u`, `zd`




# 7. Intel
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

The C file name will be saved in the variable `$CFILE`.
The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
Example: if the C file is `main.c`, the output file should be `main.s`

```c
#!/bin/bash
gcc -S masm=intel {$CFILE%.*}.s -o $CFILE
```

This script uses the gcc command to generate the assembly code of the C file passed in the $CFILE variable. The -S option tells GCC to stop after the stage of compilation proper, and the -masm=intel option specifies that the assembly code should be in Intel syntax.
The -o option specifies the output file name, where ${CFILE%.*} will give the filename without the extension and .s will be added to the end of the filename.



# 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity

Write a C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.

You are not allowed to use any functions listed in the NAME section of the `man (3)` `printf` or `man (3) puts`
Your program should return `1`
Your program should compile without any warnings when using the -Wall gcc option
```c
#include <stdio.h>

/**
 *main - print an error message to the standard error
 *
 * Return: 1
 */

int main(void)
{

        fprintf(stderr, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
        return (1);
}

```

This program is a simple C program that prints a string "and that piece of art is useful" - Dora Korpar, 2015-10-19 followed by a newline to the standard error and then returns an integer value of 1.

The first line #include <stdio.h> is a preprocessor directive that includes the stdio.h header file, which provides the fprintf function.

The main function is the entry point of the program and it doesn't take any arguments. Inside the main function, we have a single line of code fprintf(stderr, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");. This line of code uses the fprintf function to write the string "and that piece of art is useful" - Dora Korpar, 2015-10-19 followed by a newline to the standard error. The stderr variable is a predefined variable in the stdio.h header file that points to the standard error output.

Finally, the program returns an integer value of 1 using the return (1); statement. This value is returned to the operating system as the exit status of the program.

This program will output the string to the standard error instead of the standard output, so it can be useful to distinguish error messages from regular output.
