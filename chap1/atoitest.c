#include <stdio.h>
#include <stdlib.h>

// Warning: It is recommended to use strtol() function instead of atol()
// as the atol() cannot differentiate between errors and return values. 
int main(){

  int a = atoi("Hello, World"); 
  printf("%i\n", a);

  a = atoi("Hello 1, World"); 
  printf("%i\n", a);

  a = atoi("234"); 
  printf("%i\n", a);

  a = atoi("234c"); 
  printf("%i\n", a);

  a = atoi("     234c"); 
  printf("%i\n", a);

  a = atoi("     234   c"); 
  printf("%i\n", a);

  a = atoi("d    234   c"); 
  printf("%i\n", a);

}

