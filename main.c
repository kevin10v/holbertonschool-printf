#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * main - Entry point for testing _printf
 * Return: Always 0
 */
int main(void)
{
    int len1, len2;

    /* Test char */
    len1 = _printf("Character:[%c]\n", 'H');
    len2 = printf("Character:[%c]\n", 'H');
    printf("Custom: %d, Standard: %d\n\n", len1, len2);

    /* Test string */
    len1 = _printf("String:[%s]\n", "Hello, World!");
    len2 = printf("String:[%s]\n", "Hello, World!");
    printf("Custom: %d, Standard: %d\n\n", len1, len2);

    /* Test NULL string */
    len1 = _printf("NULL string:[%s]\n", NULL);
    len2 = printf("NULL string:[%s]\n", NULL);
    printf("Custom: %d, Standard: %d\n\n", len1, len2);

    /* Test percent sign */
    len1 = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    printf("Custom: %d, Standard: %d\n\n", len1, len2);

    /* Test integer (decimal) */
    len1 = _printf("Integer:[%d]\n", 12345);
    len2 = printf("Integer:[%d]\n", 12345);
    printf("Custom: %d, Standard: %d\n\n", len1, len2);

    /* Test integer (negative) */
    len1 = _printf("Negative:[%d]\n", -12345);
    len2 = printf("Negative:[%d]\n", -12345);
    printf("Custom: %d, Standard: %d\n\n", len1, len2);

    /* Test integer (zero) */
    len1 = _printf("Zero:[%d]\n", 0);
    len2 = printf("Zero:[%d]\n", 0);
    printf("Custom: %d, Standard: %d\n\n", len1, len2);

    /* Test integer (INT_MAX) */
    len1 = _printf("INT_MAX:[%d]\n", INT_MAX);
    len2 = printf("INT_MAX:[%d]\n", INT_MAX);
    printf("Custom: %d, Standard: %d\n\n", len1, len2);

    /* Test integer (INT_MIN) */
    len1 = _printf("INT_MIN:[%d]\n", INT_MIN);
    len2 = printf("INT_MIN:[%d]\n", INT_MIN);
    printf("Custom: %d, Standard: %d\n\n", len1, len2);

    /* Test 'i' specifier */
    len1 = _printf("'i' test:[%i]\n", 67890);
    len2 = printf("'i' test:[%i]\n", 67890);
    printf("Custom: %d, Standard: %d\n\n", len1, len2);

    /* Test invalid specifier */
    len1 = _printf("Invalid:[%z]\n");
    len2 = printf("Invalid:[%z]\n");
    printf("Custom: %d, Standard: %d\n\n", len1, len2);

    /* Test mixed format */
    len1 = _printf("Mixed: %c %s %% %d %i\n", 'A', "test", 42, -42);
    len2 = printf("Mixed: %c %s %% %d %i\n", 'A', "test", 42, -42);
    printf("Custom: %d, Standard: %d\n\n", len1, len2);

    /* Test edge case: empty string */
    len1 = _printf("");
    len2 = printf("");
    printf("\nCustom: %d, Standard: %d\n\n", len1, len2);

    /* Test edge case: NULL format string */
    len1 = _printf(NULL);
    printf("\nCustom (NULL): %d\n", len1);

    return (0);
}