# LIBFT

Libft is a project that requires you to create a library of useful functions that you can use in future projects at 1337. In this project, you will create a library of functions that replicate some of the standard functions in the C library, as well as some additional functions that you may find useful.

# Installation:

To use this library, you must first compile it into a static library file. To do this, run the following command:

`make`

This will compile the library into a file called libft.a.

# Usage :

To use the functions in this library, you must include the libft.h header file in your source code:

`#include "libft.h"`

You can then call any of the functions in the library in your code.

# Functions:

The library contains several functions that you may find useful in your future projects, including:

- ft_memset: Sets a block of memory to a specific value.
- ft_bzero: Sets a block of memory to zero.
- ft_memcpy: Copies a block of memory from one location to another.
- ft_memmove: Copies a block of memory from one location to another, handling overlapping blocks correctly.
- ft_memchr: Searches a block of memory for a specific character.
- ft_memcmp: Compares two blocks of memory.
- ft_strlen: Calculates the length of a string.
- ft_strlcpy: Copies a string to a specified buffer, ensuring that the destination buffer is not overflowed.
- ft_strlcat: Appends a string to a specified buffer, ensuring that the destination buffer is not overflowed.
- ft_strchr: Searches a string for a specific character.
- ft_strrchr: Searches a string for a specific character, starting from the end of the string.
- ft_strnstr: Searches a string for a specific substring.
- ft_strncmp: Compares two strings up to a specified number of characters.
- ft_atoi: Converts a string to an integer.
- ft_isalpha: Determines whether a character is an alphabetic character.
- ft_isdigit: Determines whether a character is a digit.
- ft_isalnum: Determines whether a character is an alphabetic character or a digit.
- ft_isascii: Determines whether a character is an ASCII character.
- ft_isprint: Determines whether a character is printable.
- ft_toupper: Converts a lowercase character to uppercase.
- ft_tolower: Converts an uppercase character to lowercase.
- ft_strdup: Duplicates a string.
- ft_substr: Allocates and returns a substring from the string s.
- ft_strjoin: Allocates and returns a new string, which is the result of the concatenation of s1 and s2.
- ft_strtrim: Allocates and returns a copy of s1 with the characters specified in set removed from the beginning and the end of the string.
- ft_split: Allocates and returns an array of strings obtained by splitting s using the character c as a delimiter.
- ft_itoa: Allocates and returns a string representing the integer received as an argument.
- ft_strmapi: Applies the function f to each character of the string s to create a new string with the modified characters.
- ft_striteri: Applies the function f on each character of the string passed as argument, passing its index as first argument.
- ft_putchar_fd: Outputs the character c to the given file descriptor.
- ft_putstr_fd: Outputs the string s to the given file descriptor.
- ft_putendl_fd: Outputs the string s to the given file descriptor followed by a newline.
- ft_putnbr_fd: Outputs the integer n to the given file descriptor.
- ft_lstnew: Allocates and returns a new node.
- ft_lstadd_front: Adds a new node at the beginning of the list.
- ft_lstsize: Counts the number of nodes in a list.
- ft_lstlast: Returns the last node of the list.
- ft_lstadd_back: Adds a new node at the end of the list.
- ft_lstdelone: Takes a node as parameter and frees the memory of the node's content.
- ft_lstclear: Deletes and frees the given node and every successor of that node.
- ft_lstiter: Iterates the list and applies a function to the content of each node.
- ft_lstmap: Iterates the list and applies a function to the content of each node, creating a new list with the modified content.

# Conclusion:

The Libft project is an important project that will help you to build a library of useful functions that you can use in future projects. By completing this project, you will gain a better understanding of how to write C functions and how to work with memory in C.
