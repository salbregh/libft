# LIBFT

##### My first 42 network project at Codam. This project codes a C library regrouping usual function that are allowed to be used in future school projects. The aim of rewriting the functions is to get a full understanding of how they work and how to use them.

***

### RULES
* Code is writtin according to the Norm
* All code must compile with flags -Wall -Werror -Wextra
* No memory leaks allowed
* Forbidden to use global variables
* Use of the following functions is allowed:
    * malloc
    * free
    * write
* Must include a Makefile with the following rules:
    * ${NAME}
    * all
    * clean
    * fclean
    * re

***
### Funtions
* **isapla** -- alpabetic character test
    * *int isalpha(int c)*
* **isdigit** -- decimal digit character test
    * *int isdigit(int c)*
* **isalnum** -- alphanumeric character test
    * *int isalnum(int c)*
* **isascii** -- test for ASCII character
    * *int isascii(int c)*
* **isprint** -- printing character test, space character inclusive
    * *int isprint(int c)*
* **strlen** -- find length of string
    * *size_t strlen(const char *s)*
* **memset** -- fill a byte string with a byte value
    * `void *memset(void *b, int c, size_t len)`
