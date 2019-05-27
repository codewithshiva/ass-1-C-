 #include<stdio.h>
 int main()
 {
 	int i,j=1,n,d=0,sum=0;
 	printf("How many do u want to print == ");
 	scanf("%d",&n);
 	printf("\n Your series upto n terms== \n ");
 	for(i=1;i<=n;i++)
 	{
 		j=j+d++;
 		sum=sum+i;
 		printf("%d\t",j);
	}
	printf("\n Sum of given series= %d",sum);
	return 0;
 }
