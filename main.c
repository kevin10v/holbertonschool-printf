#include <stdio.h>
#include "main.h"

int main(void)
{
    _printf("I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life\n");
    _printf("Character: %c\n", 'A');
    _printf("String: %s\n", "Go Spurs!");
    _printf("Percent: %%\n");

    _printf("Hello %s!\n", "world");
    _printf("Number: %d\n", 123);
    _printf("Negative: %i\n", -42);

    return (0);
}
