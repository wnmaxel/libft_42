*This activity has been created as part of the 42 curriculum by axweinma.*

# Libft

## Description

This project is an introduction to recreating a set of standard C library functions from scratch. While these functions already exist in the C standard library, the goal here is to understand their inner workings by implementing them ourselves — without relying on the originals. The library built through this project, **libft**, will serve as a personal toolbox throughout the entire 42 curriculum: it will be reused, extended, and improved in many future projects.

The activity covers a wide range of utility functions, from basic string and memory manipulation to more advanced linked list operations, giving a solid foundation in low-level C programming.

## Instructions

### Compilation

To compile the library, run:

```bash
make
```

This will generate the `libft.a` static library file.

To compile with bonus functions (linked list utilities):

```bash
make bonus
```

### Cleaning up

```bash
make clean    # Remove object files
make fclean   # Remove object files and libft.a
make re       # Full recompile from scratch
```

### Using the library in a project

To link `libft` with your own project:

```bash
gcc -Wall -Wextra -Werror -L. -lft your_file.c -o your_program
```

Make sure `libft.h` and `libft.a` are accessible from your project directory.

## Library Description

`libft` is a static C library containing reimplementations of standard functions as well as additional utilities. It is organized into three main categories:

**Libc functions** — Standard C library functions reimplemented from scratch, including:
- Character checks and conversions: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- String operations: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
- Memory operations: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- Conversion: `ft_atoi`

**Additional functions** — Higher-level utilities not found in the standard library:
- `ft_substr` — Extract a substring from a string
- `ft_strjoin` — Concatenate two strings into a new one
- `ft_strtrim` — Trim characters from both ends of a string
- `ft_split` — Split a string by a delimiter into an array
- `ft_itoa` — Convert an integer to its string representation
- `ft_strmapi` — Apply a function to each character of a string
- `ft_striteri` — Apply a function to each character in place
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` — Output functions to a file descriptor

**Bonus functions** — Linked list utilities:
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Resources

### Documentation & References

- [C Standard Library Reference – cppreference.com](https://en.cppreference.com/w/c)
- [The C Programming Language – Kernighan & Ritchie](https://en.wikipedia.org/wiki/The_C_Programming_Language)
- [GNU C Library documentation](https://www.gnu.org/software/libc/manual/)
- [man pages]

### AI Usage

AI was used as a learning support tool throughout this project — not to generate code, but to deepen understanding. Specifically, it was helpful in two situations: when a concept needed to be explored further through concrete and specific examples (such as understanding pointer arithmetic or memory layout), and when encountering unfamiliar syntax or vocabulary in C (such as the use of `size_t`, `va_list`, or specific compiler flags) to get clear, contextual explanations. All implementations remain original work.