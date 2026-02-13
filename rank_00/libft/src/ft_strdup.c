#include "inc/libft.h"

char *ft_strdup(const char *s1)
{
  char *ptr;
  size_t len;

  len = ft_strlen(s1) +1;
  ptr = malloc(len);
  if (!ptr)
    return (NULL);
  ft_memcpy(ptr, s1, len);
  return (ptr);
}