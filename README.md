# libft

This project was developed as part of the **42 curriculum**.

Author: **abchtaib**

---

## 📌 Overview

`libft` is a custom C library that reimplements a set of standard C library functions along with additional utility functions. The objective is to build a **solid foundation library** that will be reused in future projects throughout the 42 curriculum.

All functions are written with a focus on **memory safety**, **code clarity**, and **strict compliance with project constraints**.

---

## 🎯 Objectives

* Reimplement essential functions from the C standard library
* Understand low-level memory manipulation
* Learn proper memory allocation and deallocation
* Write reusable and well-structured C code
* Create and use a static library

---

## 📚 Library Content

The library is divided into several parts:

### Part 1 — Libc Functions

Reimplementations of standard C library functions, including:

* `ft_memset`
* `ft_bzero`
* `ft_memcpy`
* `ft_memmove`
* `ft_memchr`
* `ft_memcmp`
* `ft_strlen`
* `ft_strdup`
* `ft_strcpy` / `ft_strlcpy`
* `ft_strcat` / `ft_strlcat`
* `ft_strncmp`
* `ft_strchr` / `ft_strrchr`
* `ft_strnstr`
* `ft_atoi`
* `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
* `ft_toupper`, `ft_tolower`

---

### Part 2 — Additional Functions

Utility functions not present in the standard library:

* `ft_substr`
* `ft_strjoin`
* `ft_strtrim`
* `ft_split`
* `ft_itoa`
* `ft_strmapi`
* `ft_striteri`
* `ft_putchar_fd`
* `ft_putstr_fd`
* `ft_putendl_fd`
* `ft_putnbr_fd`

---

### Bonus Part — Linked List Utilities

The bonus part **is fully implemented** and includes the following linked list utilities:

* `ft_lstnew`
* `ft_lstadd_front`
* `ft_lstadd_back`
* `ft_lstsize`
* `ft_lstlast`
* `ft_lstdelone`
* `ft_lstclear`
* `ft_lstiter`
* `ft_lstmap`

---

## 📦 Compilation Instructions

To compile the library, run:

```bash
make
```

This will generate the static library:

```text
libft.a
```

To clean object files:

```bash
make clean
```

To clean everything:

```bash
make fclean
```

To rebuild:

```bash
make re
```

---

## 🔧 Usage Example

Include the header and link the library:

```c
#include "libft.h"
```

Compile with your project:

```bash
gcc main.c -L. -lft -o program
```

---

## 🧪 Testing

Functions were tested using:

* Custom test programs
* Edge cases (NULL pointers, empty strings, boundary values)
* Memory checking tools such as Valgrind or AddressSanitizer

---

## 🚫 Constraints & Rules

* Only allowed functions are used
* No global variables
* All allocated memory is properly freed
* Code follows 42 Norminette rules

---

## 📚 References

* Linux manual pages (`man 3 <function_name>`)
* GNU C Library Documentation
* 42 Network official subject: **libft**

These resources were used to understand standard C library behavior and implementation details.

---

## ✅ Conclusion

The `libft` project establishes a strong base in C programming by reinforcing:

* Memory management fundamentals
* Pointer manipulation
* Modular and reusable code design

This library is intended to be reused and expanded in future 42 projects.
