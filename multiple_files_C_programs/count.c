#include<stdio.h>
void count(void)
{
        int n,count=0;
        printf("enter the number");
        scanf("%d",&n);
        for(int i=0;i<=n;i++)
        {
                if(i%2==0)
                {
			count++;
                        printf("%d\n",count-1);

                }
        }
        return 0;
}
