/* checks if character is a decimal digit (a number between 0 - 9) */

int ft_isdigit (int digit) {
  if (digit >= '0' && digit <= '9') {
    return 1;
  } else {
    return 0;
  }
}