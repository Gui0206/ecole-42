/* This function checks if a character is an alphabet letter and returns 1 for true and 0 for false.*/
#include <stdio.h> 

/* falta user input, e retornar 0 e 1*/


int ft_isalpha (int c) {
  
  /* int characterE = 'g'; */

  int AMaiusculo = 'A';

  int AMinusculo = 'a';

  int ZMaisculo = 'Z';

  int ZMinusculo = 'z'; 

  if (c >= AMaiusculo && c <= ZMaisculo || c >= ZMaisculo && c <= ZMinusculo ) {
    printf("É letra");
    return (1);
  } else {
    printf("É letra não");
    return (0);
  }
}

int main() {
  ft_isalpha('2');

  return 0;
}