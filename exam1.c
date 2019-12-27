#include<stdio.h>
void main()
{
	struct state{
	char name[10];
	int pop;
	float lit_rate, income;
	}s[10];
	int i,n,x,y;
	float max,min;
	printf("enter the number of state\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("enter name of state:");
	scanf(" %s",&s[i].name);
	printf("\nenter the population of that state:");
	scanf(" %d",&s[i].pop);
	printf("\nenter literacy rate of that state:");
	scanf(" %f",&s[i].lit_rate);
	printf("\nenter income of that state:");
	scanf(" %f",&s[i].income);
	}
	max=0.0;
	for(i=0;i<n;i++)
	{
		if(s[i].lit_rate>max)
		{
		max=s[i].lit_rate;
		x=i;
		}
	}
	printf("\n%s have highest literacy rate which is %f",s[x].name,s[x].lit_rate);
	min=10000.0;
	for(i=0;i<n;i++)
	{
		if(s[i].income<min)
		{
		min=s[i].income;
		y=i;
		}
	}
	printf("\n%s have lowest income which is %f",s[y].name,s[y].income);
}
