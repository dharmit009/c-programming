#include <stdio.h>
#include <stdbool.h> 

int main(){
  bool foo = 0; 
  printf("%i\n", foo);

  int bar = -1; 
  printf("%i\n", bar);
  

  if (foo) puts ("foo is true"); 
  else puts("foo is false"); 

  // This is very important because 
  // "C" treats any other number as True 
  // other than 0. 
  if (bar) puts ("bar is true"); 
  else puts("bar is false"); 

}
