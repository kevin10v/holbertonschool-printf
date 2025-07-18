# _printf – Custom printf Implementation

A complete recreation of printf's core functionality developed by **Kevin Voka** and **Renis Vukaj** for Holberton School. This implementation handles all basic formatting needs while demonstrating advanced C programming techniques with variadic functions.

```c
int _printf(const char *format, ...);
```

## Description
Our `_printf` faithfully reproduces the standard library's behavior for:
- Character output (`%c`)
- String printing (`%s`)
- Integer display (`%d`, `%i`)
- Percent sign escaping (`%%`)
- Proper NULL string handling (prints "(null)")
- Comprehensive error detection (returns -1 when needed)

## Format Specifiers

```
Specifier | Output          | Example Usage      | Output Example
----------|-----------------|--------------------|---------------
%c        | Single character| _printf("%c", 'A') | A
%s        | String          | _printf("%s", "Hi")| Hi
%d/%i     | Signed integer  | _printf("%d", -42) | -42
%%        | Percent sign    | _printf("%%")      | %
```

## File Structure

| File               | Purpose |
|--------------------|---------|
| [main.h](https://github.com/kevin10v/holbertonschool-printf/blob/main/main.h) | Header with prototypes |
| [_printf.c](https://github.com/kevin10v/holbertonschool-printf/blob/main/_printf.c) | Main printf logic |
| [handlers.c](https://github.com/kevin10v/holbertonschool-printf/blob/main/handlers.c) | Specifier handling |
| [main.c](https://github.com/kevin10v/holbertonschool-printf/blob/main/main.c) | Test cases |




![Flow chart](https://github.com/renisv/practice/blob/main/deepseek_mermaid_20250718_6bc370.png)


## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf
```

## Examples

```c
_printf("Hello %s! Score: %d%%\n", "World", 95);
```
Output:
```
Hello World! Score: 95%
```

## Edge Cases

```
Case                | Behavior
--------------------|----------------------
NULL format         | Returns -1
Lone %              | Returns -1
NULL string         | Prints "(null)"
Unknown specifier   | Prints literally
```

## Authors

```
Kevin Voka   | https://github.com/kevin10v
Renis Vukaj  | https://github.com/renisv
```

*Holberton School Project • July 2025*