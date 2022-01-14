#include <stdio.h>

int main(){
	char vowel='Y';
	switch(vowel){
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			puts("Vowel !");
			break;
		default:
			puts("Consonants !");
	} //switch
}

