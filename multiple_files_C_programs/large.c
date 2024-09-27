#include<stdio.h>
void lg(void)
{
	int a,b,c;
	printf("enter the number of a:");
	scanf("%d",&a);
	printf("enter the number of b:");
        scanf("%d",&b);
	printf("enter the number of c:");
        scanf("%d",&c);
	if(a>b && a>c)
		printf("%d is a largest\n",a);
	else if(b>a && b>c)
		 printf("%d is a largest\n",b);
	else
		printf("%d is a largest\n",c);
	if(a<b && a<c)
                printf("%d is a greatest",a);
        else if(b<a && b<c)
                 printf("%d is a greatest",b);
        else
                printf("c is a greatest");
}
