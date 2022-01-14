#include <stdio.h>

int main(){
  // assume a name shorter than 20 characters. 
  char name[20]; 
  puts("Enter a name: "); 
  // should we use scanf or not may be it is unsafe ...
  // need to check so ... research time ...
  // Yup rwxrob was correct ... scanf is not safe as it is 
  // not it does not use bounded buffers so we can use 
  // scanf_s which is bounded.
  //
  // if used scanf("%19s", name); // use ("%[Arr.length - 1]s", name)
  // or we can even use read(); 
  //
  // Always remeber to write safe code .... 
  
  // resource myndzi 
  scanf("%19s", name);
  printf("Adios, %s. \n", name);
  printf("Your name is: %s, & you are history !!\n", name); 

  
}
