#include "inc/libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
  if (!dst && !src)
    return (NULL);
  if (dst < src)
  {
    ft_memcpy(dst, src, len);
  }
  else if (src < dst)
  {
    while (len--)
      ((char*)dst)[len] = ((char *)src)[len];
  }
  return (dst);
}