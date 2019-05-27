#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m[5],c=0;
	printf("No. of digits");
	scanf("%d",&n);
	printf("enter your number");
	{	for(int i=0;i<n;i++)
		{
			scanf("%d",&m[i]);
		}
	}
	for(int i=0;i<5;i++)
	{
		if(m[0]==0)
		{
			printf("It is not a duck number.");
			exit(0);
		}
		else
		{
			if(m[i]==0)
				c++;				
		}
	}
	if(c>0)
	{
		printf("It is a duck number...");
	}
	else
	{
		printf("It is not a duck number...");
	}
	return 0;
}
