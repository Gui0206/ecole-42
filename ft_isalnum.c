/* checks if a character is either a decimal digit or a alphabetic character*/

int ft_isalpha(int c);
int ft_isdigit(int digit);

int ft_isalnum (int alnum) {
  if (ft_isdigit(alnum) || ft_isalpha(alnum)) {
    return 1;
  } else {
    return 0;
  }
}