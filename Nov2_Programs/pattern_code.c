#include<stdio.h>
int main()
{
	//char c1='^';//$ = 36   # = 35    ^ = 94
	//printf("%d",c1);
	int i,j,k,n;
	int spec[5]={36,35,94,35,36};
	printf("Enter n value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
		
			printf("%c",spec[i-1]);
			
		}
		printf("\n");
	}
	return 0;
}

 /*#include<stdio.h>
 int main()
 {
     int i,j,k;
     for(i=0;i<5;i++)
     {
         for(k=0;k<5-i;k++)
         {
             printf(" ");
         }
         for(j=0;j<=2*i;j++)
         {
             if(i==0 || i ==4)
             printf("$");
             if(i==1 || i == 3)
             printf("#");
             if(i==2)
             printf("^");
             
         }
         printf("\n");
     }
 }*/
