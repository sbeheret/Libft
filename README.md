# Libft - Homemade libc
First school project, made in december 2017

**Allowed functions**
- Write
- Malloc
- Free

**Usage**

Call the makefile with 'make' and it will compile every functions into a library file named "libft.a".


Non-Explained functions have their own official man page.

## Memory
- [memset](http://manpagesfr.free.fr/man/man3/memset.3.html)
- [bzero](http://manpagesfr.free.fr/man/man3/bzero.3.html)
- [memcpy](http://manpagesfr.free.fr/man/man3/memcpy.3.html)
- [memccpy](http://manpagesfr.free.fr/man/man3/memccpy.3.html)
- [memmove](http://manpagesfr.free.fr/man/man3/memmove.3.html)
- [memchr](http://manpagesfr.free.fr/man/man3/memchr.3.html)
- [memcmp](http://manpagesfr.free.fr/man/man3/memcmp.3.html)

**ft_memalloc**
```C
void * ft_memalloc(size_t size);
```
Allocates and returns a “fresh” memory area of size (size).
The memory allocated is initialized to 0. If the allocation fails, the function returns NULL.

**ft_memdel**
```C
void ft_memdel(void **ap);
```
Takes as a parameter the address of a memory area that needs
to be freed, then puts the pointer to NULL.

## Strings

- [strlen](http://manpagesfr.free.fr/man/man3/strlen.3.html)
- [strdup](http://manpagesfr.free.fr/man/man3/strdup.3.html)
- [strcpy](http://manpagesfr.free.fr/man/man3/strcpy.3.html)
- [strncpy](http://manpagesfr.free.fr/man/man3/strcpy.3.html)
- [strcat](http://manpagesfr.free.fr/man/man3/strcat.3.html)
- [strncat](http://manpagesfr.free.fr/man/man3/strcat.3.html)
- [strlcat](https://linux.die.net/man/3/strlcat)
- [strchr](http://manpagesfr.free.fr/man/man3/strchr.3.html)
- [strrchr](http://manpagesfr.free.fr/man/man3/strchr.3.html)
- [strstr](http://manpagesfr.free.fr/man/man3/strstr.3.html)
- [strnstr](https://www.freebsd.org/cgi/man.cgi?query=strnstr&sektion=3)
- [strcmp](http://manpagesfr.free.fr/man/man3/strcmp.3.html)
- [strncmp](http://manpagesfr.free.fr/man/man3/strcmp.3.html)
- [atoi](http://manpagesfr.free.fr/man/man3/atoi.3.html)

**ft_strnew**
```C
char * ft_strnew(size_t size);
```
Allocates and returns a “fresh” string ending with ’\0’. Each character of the string is initialized at
’\0’. If the allocation fails the function returns NULL.

**ft_strdel**
```C
void ft_strdel(char **as);
```
Takes as a parameter the address of a string that need to be
freed, then sets its pointer to NULL.

**ft_strclr**
```C
void ft_strclr(char *s);
```
Sets every character of the string to the value ’\0’.

**ft_striter**
```C
void ft_striter(char *s, void (*f)(char *));
```
Applies the function f to each character of the string passed
as argument. Each character is passed by address to f to be
modified if necessary.

**ft_striteri**
```C
void ft_striteri(char *s, void (*f)(unsigned int, char *));
```
Applies the function f to each character of the string passed
as argument, and passing its index as first argument. Each
character is passed by address to f to be modified if necessary.

**ft_strmap**
```C
char * ft_strmap(char const *s, char (*f)(char));
```
Applies the function f to each character of the string given
as argument to create a “fresh”, allocated, new string
resulting from the successive applications of f.

**ft_strmapi**
```C
char * ft_strmapi(char const *s, char (*f)(unsigned int, char));
```
Applies the function f to each character of the string passed
as argument by giving its index as first argument to create a
“fresh”, allocated, new string resulting from the successive applications of f.

**ft_strsub**
```C
char * ft_strsub(char const *s, unsigned int start, size_t len);
```
Allocates and returns a “fresh” substring from the string given as argument.
The substring begins at index (start) and is of size (len). 
If start and len aren’t refering to a valid substring, the behavior is undefined. If the
allocation fails, the function returns NULL.

**ft_strjoin**
```C
char * ft_strjoin(char const *s1, char const *s2);
```
Allocates and returns a “fresh” string ending with ’\0’, result of the concatenation of s1 and s2. If
the allocation fails the function returns NULL.

**ft_strnjoin**
```C
char * ft_strnjoin(char *s1, char *s2, int len1, int len2);
```
Allocates and returns a “fresh” string ending with ’\0’, result of the concatenation of len1 bytes of s1 and len2 bytes of s2. If the allocation fails the function returns NULL.

**ft_strtrim**
```C
char * ft_strtrim(char const *s);
```
Allocates and returns a copy of the string,
given as argument, without whitespaces at the beginning or at
the end. Will be considered as whitespaces the
following characters ’ ’, ’\n’ and ’\t’. If s has no whitespaces at the beginning or at the end, the function returns a
copy of s. If the allocation fails the function returns NULL.

**ft_strsplit**
```C
char ** ft_strsplit(char const *s, char c);
```
Allocates and returns an array of “fresh”
strings (all ending with ’\0’, including the array itself), obtained by spliting s using the character c as a delimiter.
If the allocation fails the function returns NULL.

**ft_itoa**
```C
char * ft_itoa(int n);
```
Allocate and returns a “fresh” string ending with ’\0’ representing the integer n given as argument.
Negative numbers must be supported. If the allocation fails,
the function returns NULL.

## Output

**ft_putchar**
```C
void ft_putchar(char c);
```
Outputs the character c to the standard output.

**ft_putstr**
```C
void ft_putstr(char const *s);
```
Outputs the string s to the standard output.

**ft_putendl**
```C
void ft_putendl(char const *s);
```
Outputs the string s to the standard output followed by a ’\n’.

**ft_putnbr**
```C
void ft_putnbr(int n);
```
Outputs the integer n to the standard output.

**ft_putchar_fd**
```C
void ft_putchar_fd(char c, int fd);
```
Outputs the char c to the file descriptor fd.

**ft_putstr_fd**
```C
void ft_putstr_fd(char const *s, int fd);
```
Outputs the string s to the file descriptor fd.

**ft_putendl_fd**
```C
void ft_putendl_fd(char const *s, int fd);
```
Outputs the string s to the file descriptor fd.

**ft_putnbr_fd**
```C
void ft_putnbr_fd(int n, int fd);
```
Outputs the integer n to the file descriptor fd.
