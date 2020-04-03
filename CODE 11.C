// PROGRAM TO CHECK WHETEHR A CHARACTER IS AN ALPHABET, NUMBER OR A SPECIAL CHARACTER.
#include <stdio.h>
#include<ctype.h>
int main()
{
	char n;
	printf(" Enter a character (alphabet,number or operator)  :  ");
	scanf("%c",&n);
	if(isalpha(n))
   	printf(" Character is an Alphabet");
     	else
       	if(isdigit(n))
         	printf(" Character is a digit");
           	else
             	printf(" Character is a special character");
	return 0;
}
