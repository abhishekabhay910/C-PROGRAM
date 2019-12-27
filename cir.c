#include<stdio.h>
void main()
{
	float a, c, r;
	int i;
	printf("enter the radius of circle\n");
	scanf("%f",&r);
	printf("1. area\n2. circumference\n");
	scanf("%d",&i);
	switch(i)
	{
	case 1:
	a=3.14*r*r;
	printf("area=%f",a);
	break;
	case 2:
	c=2*3.14*r;
	printf("circumference=%f",c);
	break;
	default:
	printf("wrong choice\n");	
	}
}
