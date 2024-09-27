#include<stdio.h>
void palind(void)
{
        int n,temp,sum=0,r;
        printf("enter a number");
        scanf("%d",&n);
        temp=n;
        while(n>0)
        {
                r=n%10;
                sum=(sum*10)+r;
                n=n/10;
        }
        if(temp==sum)
                printf("it is palindrome");
        else
                printf("not a palindrome");
}
