#include<stdio.h>
void main()
{
	int arr[50][50], i,j,d,en,ex,x,y,ctr=0;
	printf("enter the dimension of square matrix\n");
	scanf("%d",&d);
	printf("enter the element\n");
	for(i=1;i<=d;i++)
	{
		for(j=1;j<=d;j++)
		{
		scanf("%d",&arr[i][j]);
		}
	}
	printf("enter the entry element\n");
	scanf("%d",&en);
	printf("enter the exit element\n");
	scanf("%d",&ex);

/*	for(i=0;i<d;i++){
	for(j=0;j<d;i++){printf("%d",arr[i][j]);}printf("\n");}*/
	for(i=1;i<=d;i++)
	{
		for(j=1;j<=d;j++)
		{
		if(arr[i][j]==en)
		{x=i;y=j;}
		}
	}
		for(j=1;j<=d;j++)
		{
		if(arr[x-1][y]==1)
		{ctr++;x=x-1;y=y;}
		if(arr[x][y-1]==1)
		{ctr++;x=x;y=y-1;}
		if(arr[x+1][y]==1)
		{ctr++;x=x+1;y=y;}
		if(arr[x][y+1]==1)
		{ctr++;x=x;y=y+1;}
		if(arr[x][y]==ex)
		{ctr++;}
		}
	printf("%d",ctr);
}
