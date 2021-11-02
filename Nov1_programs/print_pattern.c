#include<stdio.h>

int main()
{
	int n,i,j,k;
	
	printf("Enter the n value:");
	scanf("%d",&n);
	int ch =96;
	
	//printf("%d",ch);
	for(i=1;i<=n;i++)
	{
		
		for(j=n-i;j>=1;j--)
		{
			printf(" ");
		}
		
		ch=ch+i;
		int a = ch;
		for(k=i;k>=1;k--)
		{
				
			printf("%c",a--);
	
		}
		
		
		printf("\n");
	}
	
	return 0;
	
}



/*
    a
   cb
  fed
  

*/
