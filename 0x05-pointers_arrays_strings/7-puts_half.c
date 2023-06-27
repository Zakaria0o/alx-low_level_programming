#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to the string to be printed.
 *
 * Return: void.
 */
void puts_half(char *str)
{
    int length = 0;
    int i, start_index;

    while (str[length] != '\0')
        length++;

    if (length % 2 == 0)
        start_index = length / 2;
    else
        start_index = (length + 1) / 2;

    for (i = start_index; i < length; i++)
        _putchar(str[i]);

    _putchar('\n');
}
