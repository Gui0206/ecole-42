#include <stddef.h>
#include <string.h>


#include <stdio.h>
/* preenche uma string com um valor específico */
/* string, conteudo, quantidade*/
char str[20];

void  *ft_memset(void *b, int c, size_t len) {
  
  return void b;
}


int main () {

  ft_memset(str, '1', 4);
  printf("%s\n", str);

  return 0;
}