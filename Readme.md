# Libft

Libft is a custom implementation of the standard C library functions, created as a project for the 42 school. This library includes a variety of functions for string manipulation, memory management, and linked list operations, among others.

## Table of Contents

- [Libft](#libft)
  - [Table of Contents](#table-of-contents)
  - [Installation](#installation)
  - [Usage](#usage)
  - [Functions](#functions)
    - [String Manipulation](#string-manipulation)
    - [Memory Management](#memory-management)
    - [Character Checks and Conversions](#character-checks-and-conversions)
    - [File Descriptor Operations](#file-descriptor-operations)
    - [Linked List Operations](#linked-list-operations)
  - [Makefile Targets](#makefile-targets)
  - [License](#license)

## Installation

To compile the library, simply run the following command in the root directory of the project:

`make`

This will generate the `libft.a` static library file.

## Usage

To use the library in your own projects, include the `libft.h` header file and link against the `libft.a` library:

```c
#include "libft.h"
int main() {
// Your code here
return 0;
}
```

Compile your project with the `libft.a` library:

`gcc -o my_program my_program.c libft.a`

## Functions

The library provides a wide range of functions, categorized as follows:

### String Manipulation

-   `ft_strlen` - Calculate the length of a string.
-   `ft_strlcpy` - Copy a string to a destination buffer.
-   `ft_strlcat` - Concatenate two strings.
-   `ft_strchr` - Locate a character in a string.
-   `ft_strrchr` - Locate a character in a string from the end.
-   `ft_strncmp` - Compare two strings up to a specified number of characters.
-   `ft_strdup` - Duplicate a string.
-   `ft_substr` - Extract a substring from a string.
-   `ft_strjoin` - Join two strings.
-   `ft_strtrim` - Trim characters from the beginning and end of a string.
-   `ft_split` - Split a string into an array of strings based on a delimiter.

### Memory Management

-   `ft_memset` - Fill a block of memory with a specified value.
-   `ft_bzero` - Zero out a block of memory.
-   `ft_memcpy` - Copy a block of memory.
-   `ft_memmove` - Move a block of memory.
-   `ft_memchr` - Locate a byte in a block of memory.
-   `ft_memcmp` - Compare two blocks of memory.
-   `ft_calloc` - Allocate and zero-initialize an array.
-   `ft_itoa` - Convert an integer to a string.

### Character Checks and Conversions

-   `ft_isalpha` - Check if a character is alphabetic.
-   `ft_isdigit` - Check if a character is a digit.
-   `ft_isalnum` - Check if a character is alphanumeric.
-   `ft_isascii` - Check if a character is an ASCII character.
-   `ft_isprint` - Check if a character is printable.
-   `ft_toupper` - Convert a character to uppercase.
-   `ft_tolower` - Convert a character to lowercase.

### File Descriptor Operations

-   `ft_putchar_fd` - Write a character to a file descriptor.
-   `ft_putstr_fd` - Write a string to a file descriptor.
-   `ft_putendl_fd` - Write a string followed by a newline to a file descriptor.
-   `ft_putnbr_fd` - Write an integer to a file descriptor.

### Linked List Operations

-   `ft_lstnew` - Create a new list element.
-   `ft_lstadd_front` - Add an element to the front of a list.
-   `ft_lstadd_back` - Add an element to the back of a list.
-   `ft_lstsize` - Calculate the size of a list.
-   `ft_lstlast` - Get the last element of a list.
-   `ft_lstdelone` - Delete a single list element.
-   `ft_lstclear` - Clear a list.
-   `ft_lstiter` - Iterate over a list and apply a function to each element.
-   `ft_lstmap` - Create a new list by applying a function to each element of an existing list.

## Makefile Targets

The Makefile provides several targets for building and cleaning the project:

-   `make` or `make all`: Compile the library.
-   `make bonus`: Compile the library with bonus functions.
-   `make clean`: Remove object files.
-   `make fclean`: Remove object files and the library file.
-   `make re`: Recompile the library from scratch.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
