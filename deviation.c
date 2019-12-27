#include<stdio.h>
void main()
{
	int Array[10];
	int i,n; 
	float sum=0;
	float mean=0.0;
	int *ptr;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for (i = 0; i<n; i++)
	scanf("%d", &Array[i]);
	ptr=Array;
	for (i = 0; i<n; i++)
	{
	sum=sum + *ptr;
	ptr++;
	}
	mean=sum/n;
	printf("\nThe sum of array elements : %f", sum);
	printf("\nThe mean of array elements : %f", mean);
}
