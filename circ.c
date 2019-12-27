#include<stdio.h>
void main()
{
	float a, b, c;
	int i;
	printf("1. triangle\n2. square\n3. rectangle\n4. circle\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
	printf("enter base & height\n");
	scanf("%f%f",&a,&c);
		b=0.5*(a*c);
		printf("yr area of triangle is:%f",b);
		break;
		
		case 2:
	printf("enter side\n");
	scanf("%f",&a);
		b=a*a;
		printf("yr area of square is:%f",b);
		break;

		case 3:
	printf("enter length\n");
	scanf("%f",&a);
	printf("enter breadth\n");
	scanf("%f",&c);
		b=a*c;
		printf("yr area of rectangle is:%f",b);
		break;
		
		case 4:
	printf("enter radius\n");
	scanf("%f",&a);
		b=3.14*(a*a);
		printf("yr area of circle is:%f",b);
		break;
	}
}
