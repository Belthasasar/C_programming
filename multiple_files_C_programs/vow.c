#include <stdio.h>
void vow(void)
{
char ch;
printf("Enter any alphabet: \n");
scanf("%c", &ch);
switch(ch)
{
case 'a':
case 'e':
case 'i' :
case 'o':
case 'u':
case 'A':
case 'E' :
case 'I' :
case 'O':
case 'U':
printf( "Vowel: %c",ch);
break;
default:
printf("Consonant: %c",ch);
}
}
