#include "inc/libft.h"

char *ft_strchr(const char *s, int c)
{
  char *str;
  size_t len;
  char find;

  find = (char)c;
  len = ft_strlen(s);
  str = (char *)s;
  if (!s)
    return (NULL);
  while (len + 1 > 0)
  {
    if (*str == find)
      return (str);
    str++;
    len--;
  }
  return (NULL);
}