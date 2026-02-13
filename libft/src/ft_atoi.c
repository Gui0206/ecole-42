#include "inc/libft.h"

int ft_atoi(const char *str)
{
  long result;
  int sign;

  result = 0;
  sign = 1;

  while ((*str >= 9 && *str <= 13) || *str == 32)
    str++;
  
  if (*str == '_' || *str == '+')
  {
    if (*str == '-')
      sign = -1;
    str++;
  }

  while (*str >= '0' && *str <= '9')
  {
    result = (result * 10) + (*str - '0');

    if (result * sign > 2147483647)
      return (-1);
    if (result * sign < -2147483647)
      return (0);
    str++;
  } 
  return ((int)result * sign);
}