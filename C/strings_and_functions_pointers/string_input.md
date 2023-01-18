# STRING INPUT
Programs are often interactive, asking the user for input.
To retrieve a line of text or other string from the user, C provides the `scanf()`, `gets()`, and `fgets()` functions.
You can use `scanf()` to read input according to the format specifiers.

###### For Example:
```c
#include <stdio.h>

int main() {
    char first_name[25];
    int age;
    printf("Enter your first name and age: \n");
    scanf("%s %d", first_name, &age);

    printf("\nHi, %s. Your age is %d", first_name, age);

    return 0;
}
```

When `scanf()` is used to read a string, there is no need for `&` to access the variable address because an array name acts as a pointer.
`scanf()` stops reading input when it reaches a space. To read a string with spaces, use the `gets()` function. It reads input until a terminating newline is reached (the Enter key is pressed).

###### For Example:

```c
#include <stdio.h>

int main() {
    char full_name[50];
    printf("Enter your full name: ");
    gets(full_name);
    
    printf("\nHi, %s.", full_name);
    
    return 0;
}

```

A safer alternative to `gets()` is `fgets()`, which reads up to a specified number of characters. This approach helps prevent a buffer overflow, which happens when the string array isn't big enough for the typed text.

######  For Example:
```c
#include <stdio.h>

int main() {
    char full_name[50];
    printf("Enter your full name: ");
    gets(full_name);

    printf("\nHi, %s.", full_name);

    return 0;
}

```

A safer alternative to `gets()` is `fgets()`, which reads up to a specified number of characters. This approach helps prevent a buffer overflow, which happens when the string array isn't big enough for the typed text.

###### For Example:
```c
#include <stdio.h>

int main() {
    char full_name[50];
    printf("Enter your full name: ");
    fgets(full_name, 50, stdin);

    printf("\nHi, %s", full_name);

    return 0;
}

```
The `fgets()` arguments are the string name, the number of characters to read, and a pointer to where you want to read the string from. `stdin` means to read from the standard input, which is the keyboard.
Another difference between gets and fgets is that the newline character is stored by fgets.

NOTE:`fgets()` reads only `n-1` characters from `stdin` because there must be room for `'\0'`.
