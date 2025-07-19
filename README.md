# ft_printf

## Introduction
This project is part of the 42 school curriculum and focuses on recreating a simplified version of the C standard library function `printf()`. The `ft_printf` function is designed to format and print data to the standard output, handling a set of format specifiers. The project emphasizes the use of variadic functions, string manipulation, and low-level output operations in C, adhering to the 42 Norm.

## Features
The `ft_printf` function supports the following format specifiers:
- `%c`: Prints a single character.
- `%s`: Prints a string (as defined by the C convention).
- `%p`: Prints a `void *` pointer in hexadecimal format (or `(nil)` for NULL pointers).
- `%d`: Prints a decimal (base 10) number.
- `%i`: Prints an integer in base 10.
- `%u`: Prints an unsigned decimal (base 10) number.
- `%x`: Prints a number in hexadecimal (base 16) lowercase format.
- `%X`: Prints a number in hexadecimal (base 16) uppercase format.
- `%%`: Prints a percent sign.

**Note**: This implementation does not include bonus features such as flags, width, precision, or additional specifiers.

## Project Structure
```
ft_printf/
├── Makefile
├── ft_printf.h
├── ft_printf.c
├── ft_printhex.c
├── ft_printnbr.c
├── ft_printptr.c
├── ft_printuint.c
├── ft_print_utils.c
└── main.c (optional, for testing purposes)
```

- **ft_printf.h**: Header file with function prototypes and necessary includes.
- **ft_printf.c**: Core implementation of the `ft_printf` function.
- **ft_printhex.c**: Handles hexadecimal (`%x`, `%X`) conversions.
- **ft_printnbr.c**: Handles decimal and integer (`%d`, `%i`) conversions.
- **ft_printptr.c**: Handles pointer (`%p`) conversion.
- **ft_printuint.c**: Handles unsigned integer (`%u`) conversion.
- **ft_print_utils.c**: Utility functions for printing characters (`%c`), strings (`%s`), and percent signs (`%%`).
- **Makefile**: Automates compilation with rules: `all`, `clean`, `fclean`, `re`.

## How to Use

1. **Compile the project**:
   The project compiles into a static library (`libftprintf.a`). Run:
   ```bash
   make
   ```

2. **Include in your project**:
   - Include the header file in your C code:
     ```c
     #include "ft_printf.h"
     ```
   - Link the library (`libftprintf.a`) during compilation.
   

3. **Compile with the library**:
   Example compilation command:
   ```bash
   gcc -Wall -Wextra -Werror main.c -L. -lftprintf -o test_program
   ```


## Compilation
The `Makefile` provides the following rules:
- `make` or `make all`: Compiles the source files into `libftprintf.a`.
- `make clean`: Removes object files.
- `make fclean`: Removes object files and the library.
- `make re`: Rebuilds the project from scratch.

Example manual compilation:
```bash
cc -Wall -Wextra -Werror -c ft_printf.c ft_printhex.c ft_printnbr.c ft_printptr.c ft_printuint.c ft_print_utils.c
ar rcs libftprintf.a ft_printf.o ft_printhex.o ft_printnbr.o ft_printptr.o ft_printuint.o ft_print_utils.o
```
## Notes
- **Function Line Limit**: Each function is designed to respect the 25-line limit, which may require careful structuring of the code.


## Author
- **Name**: Nuno Taboada
- **Email**: nunotaboada@gmail.com

This project was completed as part of the 42 school curriculum

<a href="https://www.42porto.com/pt/">
 	<img alt="Static Badge" src="https://img.shields.io/badge/_-Porto-_?style=for-the-badge&logo=42&labelColor=black&color=gray&link=https%3A%2F%2Fwww.42porto.com%2Fpt%2F">	
</a>
