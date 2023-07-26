#include "main.h"
char *_strncpy(char *dest, char *src, int n)
{
char *dest_ptr = dest;
/* Copy at most n characters from src to dest*/
while (*src != '\0' && n > 0) {
*dest_ptr = *src;
dest_ptr++;
src++;
n--;
}
/* Pad the remaining characters with null bytes if n is greater than the length of src*/
while (n > 0) {
*dest_ptr = '\0';
dest_ptr++;
n--;
}
return (dest);
}
