#include<stdio.h>
void arithmedic(void)
{
	int a[2][2],b[2][2];
	int c[2][2],i,j;
	printf("enter the number");
       for(int i=0;i<2;i++)
       {
	       for(int j=0;j<2;j++)
		{
		       scanf("%d",&a[i][j]);
		}
       }
         printf("enter the number");
       for(int i=0;i<2;i++)
       {
               for(int j=0;j<2;j++)
                {
                       scanf("%d",&b[i][j]);
                }
       }


         for(int i=0;i<10;i++)
       {
               for(int j=0;j<10;j++)
	       {
		        c[i][j]=a[i][j]+b[i][j];
			c[i][j]=a[i][j]-b[i][j];
			c[i][j]=a[i][j]*b[i][j];
		       
	       }
       }
	   for(int i=0;i<2;i++)
       {
               for(int j=0;j<2;j++)
               {

	       printf("the calculatting is:%d\n",c[i][j]);
	       }
	}
	   for(int i=0;i<2;i++)
       {
               for(int j=0;j<2;j++)
               {

               printf("the calculatting is s:%d\n",c[i][j]);
               }
        }
	   for(int i=0;i<2;i++)
       {
               for(int j=0;j<2;j++)
               {

               printf("the calculatting is m:%d\n",c[i][j]);
               }
        }

	
}
