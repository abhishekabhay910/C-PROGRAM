#include<stdio.h>
void main()
{
	int arr[50][50], i,j, large, l,m;
	printf("enter the no of rows\n");
	scanf("%d",&l);
	printf("enter the no of column\n");
	scanf("%d",&m);
	printf("enter the element\n");
	for(i=0;i<l;i++)
	{
		for(j=0;j<m;j++)
		{
		scanf("%d",&arr[i][j]);
		}
	}
	large=-100;
	for(i=0;i<l;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr[i][j]%2==0)
			{
			if(large<arr[i][j])
			{
			large=arr[i][j];
			}
			}
		}
	}
	printf("largest number=%d",large);
}
