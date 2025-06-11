/* This function checks if a character is an alphabet letter and returns 1 for true and 0 for false.*/

  int   ft_isalpha (int c) {
  
  if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' ) {
    return (1);
  } else {
    return (0);
  }
}