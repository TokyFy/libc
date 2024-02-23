#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  char *new = ft_strdup((char *)s);
  if(!new)
    return 0;

  char *ptr = new;
  while (*ptr) {
    *ptr = f(ptr - new , *ptr);
    ptr++;
  }

  return new;
}
