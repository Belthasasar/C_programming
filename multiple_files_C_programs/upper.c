#include <stdio.h>
void upper(void)
{
char c;
printf("Enter a character: \n");
scanf("%c",&c);
switch(c)
{
case 'A'...'Z':
printf("Upper case character\n");
break;
case 'a'...'z':
printf("Lower case character\n");
break;
case '0'...'9':
printf("Digit \n" );
break;
default:
printf("Special character\n");
}
}
