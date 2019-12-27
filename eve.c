#include<stdio.h>
void main()
{
	int n, i, x=0;
	printf("enter the number of even number required\n");
	scanf("%d",&n);
	x=n*2;
	printf("first %d even numbers are:\n",n);
	for(i=1;i<=x;i++)
	{
		if(i%2==0)
		{
		printf("%d\n",i);
		}
	}
}
