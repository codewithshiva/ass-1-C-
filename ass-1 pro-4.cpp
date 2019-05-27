#include<stdio.h>
int main()
{
	float a,b,product;
	printf("a=");
	scanf("%f",&a);
	printf("b=");
	scanf("%f",&b);
	product = a/(1/b);
	printf("Product = %f",product);
	return 0;
}
