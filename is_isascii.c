/* Returns non-zero if character (int) is ascii */

int ft_isascii (int ascii) {
  if (ascii >= 0 && ascii <= 127) {
    return 1;
  } else {
    return 0;
  }
}