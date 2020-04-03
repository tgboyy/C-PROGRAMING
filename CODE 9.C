// PROGRAM TO CHECK A CHARATER IS ALPHABET, NUMBER OR OPERATOR.
#include <stdio.h>
int main()
{
	char n;
	printf(" Enter a character (alphabet,number or operator)  :  ");
	scanf("%c",&n);
    if(((n>=97)&&(n<=122))||((n>=65)&&(n<=90)))
   	printf(" Character Is An Alphabet");
     	else
       	printf(" Character Is Not An Alphabet");
	return 0;
}
