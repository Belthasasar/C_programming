#include<stdio.h>
void swapp(void)
{
	int x=10,y=23;
	printf("the value of x=%d , y=%d",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("the swapping is x=%d , y=%d",x,y);
}

