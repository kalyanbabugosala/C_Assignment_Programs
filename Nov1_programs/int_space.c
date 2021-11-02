#include<stdio.h>
#define Max 100

int main()
{
	char str[Max];
	fgets(str,Max,stdin);
	
	for(int i=0;i<strlen(str);i++)
	{
		if(isdigit(str[i]))
		{
			str[i]=' ';
		}	
	}
	
	printf("String after replacing the integers with spaces: %s \n",str);
	return 0;
}
