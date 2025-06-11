/* gets the length of a string */
#include <stddef.h>

size_t ft_strlen(const char *s) {
  int i;
  while (s[i]) {
    ++i;
  };
  return i;
}
