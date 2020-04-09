/* PROGRAM TO CHECK WHETHER A CHARACTER IS AN ALPHABET OR NOT. */
#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
printf("enter any character");
scanf("%c",&a);
	if((a>64 && a<91) || (a>96 && a<123))
 		printf("Alphabet");
	else 
		printf("Not Alphabet");
getch();
}
