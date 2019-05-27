//program to illustrate suppression character in scanf()
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three number = ");
	scanf("%d%*d%d",&a,&b,&c);            // * is used as suppresion character
	printf("%d%d%d",a,b,c);               // If we want to skip any input field then we specify * b/w the % sign and the conversion specification.. 
	return 0;
}
