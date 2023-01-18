# STRINGS
A string in `C` is an array of characters that ends with a NULL character `'\0'`. 
A string declaration can be made in several ways, each with its own considerations.
###### For example:

``c
char str_name[str_len] = 'strings'

```
This creates a string named `str_name` of `str_len` characters and initializes it to the value "string".
When you provide a string literal to initialize the string, the compiler automatically adds a NULL character `'\0'` to the char array.
For this reason, you must  declare the array size to be at least one character longer than the expected string length.
The statements below creates strings that include the NULL character. If the declaration does not include a `char` array size, then it will be calculated based on the length of the string in the initialization plus one for `'\0'`:

###### For Example:
```c
#include <stdio.h>

int main() {
    char str1[6] = "hello";
    char str2[ ] = "world";  /* size 6 */
    printf("str1 is: %s, str2 is: %s", str1, str2);
    
    return 0;
}

```

A string can also be declared as a set of characters:

###### For Example:
```c
#include <stdio.h>

int main() {
    char str3[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char str4[ ] = {'h', 'e', 'l', 'l', 'o', '\0'}; /* size 6 */
    printf("str3 is: %s, str4 is: %s", str3, str4);

    return 0;
}

```

With this approach, the NULL character must be added explicitly. Note that the characters are enclosed in single quotation marks.
As with any array, the name of a string acts as a pointer.
A string literal is a text enclosed in double quotation marks. 
A character, such as 'b', is indicated by single quotation marks and cannot be treated as a string.

A string pointer declaration such as `char *str = "stuff";` is considered a constant and cannot be changed from its initial value. 

To safely and conveniently operate with strings, you can use the Standard Library string functions shown below. Don't forget to include `<string.h>`.
`strlen()` - get length of a string
`strcat()` - merge two strings
`strcpy()` - copy one string to another
`strlwr()` - convert string to lower case
`strupr()` - convert string to upper case
`strrev()` - reverse string
`strcmp()` - compare two strings
<p style="color:red; font-weight:bold;">NOTE: String functions and string pointers are covered in later lessons.</p>



