#include <stdio.h>

/**
 * main - prints the size of various types on the computer
 *
 * Return: 0
 */

int main(void){
        char c;
        int i;
        long l;
        long long ll;
        float k;

        printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
        printf("Size of an int: %zd byte(s)\n", (unsigned long)sizeof(i));
        printf("Size of a long: %u byte(s)\n", (unsigned long)sizeof(l));
        printf("Size of a long long: %lu byte(s)\n", (unsigned long)sizeof(ll));
        printf("Size of a float: %u byte(s)\n", (unsigned long)sizeof(k));
        return 0;

}

