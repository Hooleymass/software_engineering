# Why C programming is awesome

C programming is considered awesome for several reasons. It is a low-level language, which means it gives programmers more control over the underlying hardware. It is also a procedural language, which means it follows a step-by-step approach to solving problems. Additionally, C is widely used in systems programming, embedded systems, and other applications where performance is critical. It also has a large number of libraries available, which makes it easy to perform complex tasks.

# Who invented C

C was invented by Dennis Ritchie at Bell Labs in the early 1970s. He and Brian Kernighan wrote the first C book,** "The C Programming Language"** and it is widely considered the **"bible"** of the language.

# Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds

Dennis Ritchie was an American computer scientist who developed the C programming language and made significant contributions to the development of the Unix operating system. He passed away in 2011. Brian Kernighan is a computer scientist and professor at Princeton University who co-wrote the first book on the C programming language and made significant contributions to the development of Unix. Linus Torvalds is a software engineer from Finland, He is best known as the creator of the Linux operating system, which is built using the C programming language.

# What happens when you type gcc main.c

When you type ` "gcc main.c"` in the command line, the GCC (GNU Compiler Collection) compiler is invoked and it will compile the file `"main.c"` and generate an executable file.

#  What is an entry point

An entry point is the starting point of a program. In C programming, the entry point of a program is the `"main"` function.

# What is main

The `"main"` function is a special function in C programming that serves as the entry point of a program. It is where the execution of the program begins.

# How to print text using printf, puts and putchar

To print text using the `"printf"` function, you can use a format specifier to specify the type of data you want to print. For example, to print a string, you can use the `"%s"` format specifier, like this:` printf("Hello, World!\n");`


To print text using the `"puts"` function, you can simply pass a string as an argument, like this: `puts("Hello, World!");`

To print a single character using the `"putchar"` function, you can pass the character as an argument, like this: `putchar('H');`

# How to get the size of a specific type using the unary operator sizeof

You can use the unary operator sizeof to get the size of a specific type in bytes. For example, to get the size of an integer, you can use the following code: `sizeof(int)`

# How to compile using gcc

To compile using GCC, you can use the following command: `gcc -o output_file` `source_file.c`. This will generate an executable file named `"output_file"` from the source code in `"source_file.c"`.

# What is the default program name when compiling with gcc

When compiling with GCC, the default program name is `a.out`

# What is the official C coding style and how to check your code with betty-style

The official *C coding style is known as the "K&R style" which refers to the first book on C Programming Language written by Brian Kernighan and Dennis Ritchie. You can use the `"betty-style"` tool to check your code against the K&R style guidelines.

# How to find the right header to include in your source code when using a standard library function

When using a standard library function, you can consult the C standard library documentation or use an online search engine to find the right header file to include in your source code.

# How does the main function influence the return value of the program

The `"main"` function influences the return value of the program by specifying the integer value that is returned to the operating system when the program exits. The default return value is `0`, which indicates that the program ran successfully. If the main function returns a non-zero value, it indicates that an error occurred during the execution of the program.


