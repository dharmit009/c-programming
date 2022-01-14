#include <stdio.h>

int main()
{
  // array's in C are mutable meaning they are changable ...
  // 
  // Both the below lines are decalring same thing but there is one key difference
  // the difference is '\0' this is also known as null byte. 
  // The Null Byte indicates the end of the line and its takes 2 bytes of data. 
  // meaning the same string below is will use less space. 
  //
  // char a[11] = {'s', 'h', 'a', 'f', 't', 'n', 'e', 'r', '\0'};
  //
  char a[11] = "shaftner";
  a[0] = 'S';
  a[9] = 'Z';
  puts(a);
  // this printed shaftner ... this is because puts() knowns about null byte (\0). 
  printf("%s\n", a);

  // But look what happens we run it in for loop and ask to print all the characters. 
  for(unsigned int i = 0; i < sizeof(a); i++){
    printf("index [%i] : %c\n", i, a[i]);
  }

// foo is a pointer which will point to the first character in memory i.e 's'. 
  char * foo = "spock"; 

// This is BAD because it is trying we think it is trying to modify the 's' to 'S' 
// later results in segmentation fault and core dump. 
// but what it is actually doing is pointing foo to random stuff in memory which 
// BAD: foo[0] = 'S' 
//
// foo[0] = 'S';

// Here is a test to see if foo actaully points to the first character in the memory. 
// We added +2 so that it will print the 3 character from the first character stored in memory. 
// which is letter 'o' in 'spock'

  printf("%c", *(foo+2));

// From this we also learn that the strings stored in memories which are declared as pointers are immutable. 
// We cannot change them ...


}
