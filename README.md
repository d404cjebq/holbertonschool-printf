_printf
Custom Implementation of the C Standard printf Function

-Description
`_printf` is a custom recreation of the standard C library function `printf`. It produces output according to a format string and sends it to the standard output. This project was developed as part of the Holberton School curriculum to understand low-level programming, variadic functions, and formatted output.

-Prototype
```c
int _printf(const char *format, ...);
```

Returns the number of characters printed (excluding the null byte), or -1 on error.

-Supported Format Specifiers
| Specifier | Description | Example |
|-----------|-------------|---------|
| `%c` | Prints a single character | `_printf("%c", 'A')` → A |
| `%s` | Prints a string of characters | `_printf("%s", "Hello")` → Hello |
| `%d` | Prints a decimal integer | `_printf("%d", 42)` → 42 |
| `%i` | Prints an integer | `_printf("%i", -7)` → -7 |
| `%u` | Prints an unsigned integer | `_printf("%u", 100)` → 100 |
| `%o` | Prints a number in octal | `_printf("%o", 8)` → 10 |
| `%x` | Prints number in lowercase hex | `_printf("%x", 255)` → ff |
| `%X` | Prints number in uppercase hex | `_printf("%X", 255)` → FF |
| `%b` | Prints a number in binary | `_printf("%b", 5)` → 101 |
| `%S` | Prints non-printable chars as \x hex | `_printf("%S", "Hello\1")` → Hello\x01 |
| `%%` | Prints a literal percent sign | `_printf("%%")` → % |
| `%p` | Prints a pointer address | `_printf("%p", ptr)` → 0x... |
| `%r` | Prints string in reverse | `_printf("%r", "abc")` → cba |
| `%R` | Prints ROT13 encoded string | `_printf("%R", "Hello")` → Uryyb |

-Files & Structure
| File | Description |
|------|-------------|
| `_printf.c` | Main _printf function — parses the format string |
| `_putchar.c` | Helper function to write a character to stdout |
| `main.h` | Header file — function prototypes and struct definitions |
| `print_helpers.c` | Helper functions for basic specifiers (%c, %s, %%) |
| `numbers.c` | Handles numeric specifiers (%d, %i, %u, %o, %x, %X) |
| `print_binary.c` | Handles binary specifier (%b) |
| `print_S.c` | Handles non-printable character specifier (%S) |
| `handlers` | Directory containing handler lookup functions |
| `man_3_printf` | Man page documentation for _printf |

-Compilation
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o printf_test
```

-Usage Examples
```c
/* Strings and characters */
_printf("Hello, %s!\n", "World");   // → Hello, World!
_printf("Char: %c\n", 'Z');         // → Char: Z

/* Numbers */
_printf("Int: %d\n", -42);          // → Int: -42
_printf("Unsigned: %u\n", 255);     // → Unsigned: 255
_printf("Hex: %x\n", 255);          // → Hex: ff
_printf("Octal: %o\n", 8);          // → Octal: 10
_printf("Binary: %b\n", 5);         // → Binary: 101

/* Special specifiers */
_printf("Reverse: %r\n", "hello");  // → Reverse: olleh
_printf("ROT13: %R\n", "Hello");    // → ROT13: Uryyb
_printf("Percent: 100%%\n");        // → Percent: 100%
```

-How It Works
- If the current character is not `%`, it is printed directly using `_putchar`
- If `%` is found, the next character is checked as a conversion specifier
- A handler lookup table maps each specifier to its corresponding handler function
- If the specifier is unknown, both `%` and the unknown character are printed
- The function returns the total count of characters printed

  -Requirements
- Allowed editors: vi, vim, emacs
- Compiled on Ubuntu 20.04 LTS
- Compiler flags: `-Wall -Wextra -Werror -pedantic`
- Code follows the Betty style
- No global variables
- No more than 5 functions per file
- All prototypes in `main.h`
- All header files include guarded
--------------------------------
-Authors:
Dhay Aldhwayan , Shatha Alanzi 
