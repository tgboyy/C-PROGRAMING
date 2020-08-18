// TO CHECK WETHER A STRING IS PALINDROME OR NOT.
#include <stdio.h>
int main()
{
    char x[50],z[50];
    int i=0,c=0,d=0;
    printf("\n\t Enter a string  :  ");
    gets(x);
    printf("\n\n\t%s",x);
    while(x[i]!='\0')
         {
             c++;
             i++;
         }
    printf("\n\t Size of string is :  %d",c);
    printf("\n\t Reverse of string is  : ");
    for(i=0;i<c;i++)
        {
            printf("%c",x[c-1-i]);
        }
    for(i=0;i<c;i++)
        {
            z[i]=x[c-1-i];
        }
        z[i]='\0';
    for(i=0;i<c;i++)
        {
            if(z[i]!=x[i])
              {
                  d=1;
                  break;
              }}
    if(d==0)
      {
          printf("\n\t String is palindrome  ");
      }
      else
         {
             printf("\n\t String is not palindrome  ");
         }
    return 0;
}
