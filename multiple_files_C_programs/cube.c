#include<stdio.h>
void cube(void)
{
	int n,cube;
	printf("enter the include number:");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
	cube=i*i*i;
	printf("%d cube is : %d\n",i,cube);
	}
}
