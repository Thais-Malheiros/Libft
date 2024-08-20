# Libft
## My very first own library

![image](https://github.com/user-attachments/assets/f9670d4b-69bf-44ce-9477-f947eea513f4) ![image](https://github.com/user-attachments/assets/7ab7c60c-f171-4454-8032-92e674a074a6)

Libft is the first major project at 42 School, with the goal of building our first static library of functions in the C language.

## Part 1 - Libc functions

To begin, I needed to reimplement a set of functions from the libc library. These functions were required to have the same prototypes and exhibit the same behaviors as the originals and must comply with their definitions in the manual pages. They did not require any external functions, with the exception of calloc and strdup, which use malloc.

These are the functions that I had to reimplement:

• isalpha
• isdigit
• isalnum
• isascii
• isprint
• strlen
• memset
• bzero
• memcpy
• memmove
• strlcpy
• strlcat
• toupper
• tolower
• strchr
• strrchr
• strncmp
• memchr
• memcmp
• strnstr
• atoi
• calloc
• strdup

## Part 2 - Additional functions

In the second part, I needed to develop a set of functions that are either not part of the libc library or are part of it but in a different form.

The additional functions that I had to implement are:

• ft_substr
• ft_strjoin
• ft_strtrim
• ft_split
• ft_itoa
• ft_strmapi
• ft_striteri
• ft_putchar_fd
• ft_putstr_fd
• ft_putendl_fd
• ft_putnbr_fd


