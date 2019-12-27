#include<stdio.h>
int main()
{
	int i, sum=0;
	for(i=10; i<100; i++)
	{
		if(i%7==0)
		{
			sum=sum+i;
		}
	}
		printf("yr sum is:%d",sum);
}
