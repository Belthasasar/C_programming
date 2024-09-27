#include<stdio.h>
void same(void)
{
	int n,nn,nnn,add,sub,mult;
	printf("enter the include number:");
        scanf("%d",&n);
	nn=n*11;
	nnn=n*111;
	add=n+nn+nnn;
	printf("%d+%d+%d=%d\n",n,nn,nnn,add);
	sub=n-nn-nnn;
        printf("%d-%d-%d=%d\n",n,nn,nnn,sub);
	mult=n*nn*nnn;
        printf("%d*%d*%d=%d",n,nn,nnn,mult);
}
