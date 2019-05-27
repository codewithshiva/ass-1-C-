#include<stdio.h>
int main()
{
	int x,y,X,Y;
	printf("max. X-axis = ");
	scanf("%d",&X);
	printf("max. Y-axis = ");
	scanf("%d",&Y);
	printf("enter co-ordinates of X and Y-axis=");
	scanf("%d%d",&x,&y);
	for(int i=0;i<X;i++)
	{
		for(int j=0;j<Y;j++)
		{
			if(i==x&&j==y)
			{
				printf("YASHPAL");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
