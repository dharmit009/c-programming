#include <stdio.h>
#include <stdlib.h>

int main(){
	char card_name[3]; 
	puts("Enter a card name: "); 
	scanf("%2s", card_name); 
	int val = 0; 

	switch(card_name[0]){
		case 'K':
		case 'Q':
		case 'J':
			val = 10; 
			break;
		case 'A':
			val = 11; 
			break;
		default:
			// FIXME: replace me with 
			// SOLUTION: 
			// 1. change to strtol().
			// 2. Try typecasting. 
			val = atoi(card_name); 
	} //switch
		
	if (3 < val && val < 7)
    puts("Counts goes up.");
  else if (val == 10 || val == 11)
    puts("Counts goes down.");
  return 0; 
	

}

