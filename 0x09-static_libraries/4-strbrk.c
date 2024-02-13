1 #include "main.h"                                                          
  2  
  3 /**
  4  * _strpbrk - searches a string for any of a set of bytes.
  5  * @s: first string.
  6  * @accept: second string.
  7  * Return: a pointer to the byte in s that matches one of the
  8  * bytes in accept, or NULL if no such byte is found.
  9  */
 10 char *_strpbrk(char *s, char *accept)
 11 {
 12         unsigned int i, j;
 13  
 14         for (i = 0; *(s + i) != '\0'; i++)
 15         {
 16                 for (j = 0; *(accept + j) != '\0'; j++)
 17                 {
 18                         if (*(s + i) == *(accept + j))
 19                                 return (s + i);
 20                 }
 21         }
 22         return ('\0');
 23 }
