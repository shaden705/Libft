*This activity has been created as part of the 42 curriculum by sshakhat.*
# libft

## Description
libft is a custom C library created as part of the 42 curriculum.  
The goal of this project is to reimplement a set of standard C library functions, as well as additional utility functions that will be reused in future projects.

This project helps strengthen understanding of:
- Memory management
- Pointers
- Strings manipulation
- Linked lists
- Defensive programming in C

---

## Functions Implemented

### Part 1 – Libc Functions
- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint
- ft_strlen
- ft_memset
- ft_bzero
- ft_memcpy
- ft_memmove
- ft_strlcpy
- ft_strlcat
- ft_toupper
- ft_tolower
- ft_strchr
- ft_strrchr
- ft_strncmp
- ft_memchr
- ft_memcmp
- ft_strnstr
- ft_atoi
- ft_calloc
- ft_strdup

---

### Part 2 – Additional Functions
- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_striteri
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

---

### Linked List Functions
- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

---

## Instructions
To compile the library, run:
```bash
make
```
Clean object files:
```bash
make clean
```
Rebuild:
```bash
make re
```
## Resources
the following resources were used as references while working on this project:

- **man pages (Linux manual)**
  - man strlen, man strlcat, man memcpy, man memmove, man atoi, etc.
  Used to understand the exact behavior, return values, and edge cases of standard C functions.

- **The C Programming Language – Brian W. Kernighan & Dennis M. Ritchie**
  A classic reference for understanding core C concepts such as pointers, memory management, and strings.

- **42 Documentation**
  - Libft subject PDF
  - 42 Norm (coding style rules)
  Used to ensure compliance with project requirements and coding standards.

- **cplusplus.com**
  https://cplusplus.com/reference/cstring/  
  Used to review function behavior and examples for string and memory functions.

- **GeeksforGeeks**
  https://www.geeksforgeeks.org/c-programming-language/  
  Used for additional explanations and edge case discussions related to C functions and linked lists.

AI assistance was used as a **learning and support tool** during this project.

Specifically, AI was used to:
- Explain the behavior of C standard library functions (e.g., `strlcat`, `memmove`, `strnstr`)
- Clarify edge cases and common pitfalls
- Help understand linked list concepts in the bonus part
- Review logic and provide suggestions for cleaner and more readable implementations
- Assist in debugging and understanding compiler warnings

AI was **not used to blindly generate solutions**.  
All code was manually written, reviewed, and adapted by the student to fully comply with the 42 Norm and project requirements.

The use of AI contributed to better understanding, not replacement of personal work.
