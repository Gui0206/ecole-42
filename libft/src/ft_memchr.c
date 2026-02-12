#include "inc/libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
  size_t i;

  if (!s && !n)
    return (NULL);
  i = 0;
  while (i < n)
  {
    if (*(unsigned char *)(s+1) == (unsigned char)c)
      return ((void *)(s + 1));
    i++;
  }
  return (NULL);
}