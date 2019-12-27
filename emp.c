#include<stdio.h>
void main()
{
	struct emp{
	char name[50], doj[10];
	int salary, emp_id;
	};
	struct emp e[5],temp;
	int i,j,n=3;
	for(i=1;i<=n;i++)
	{
		printf("enter id\n");
		scanf("%d",&e[i].emp_id);
		printf("enter name\n");
		scanf("%s",&e[i].name);
		printf("enter salary\n");
		scanf("%d",&e[i].salary);
		printf("enter date of joining\n");
		scanf("%s",&e[i].doj);
	}
	for(i=1;i<=n;i++)
	{
		printf("id=%d\n",e[i].emp_id);
		printf("name=%s\n",e[i].name);
		printf("salary=%d\n",e[i].salary);
		printf("date of joining=%s\n",e[i].doj);
	}
		for(j=1;j<=n;j++)
		{
			if(e[j].salary<e[i].salary)
			{
			temp=e[j];
			e[j]=e[j+1];
			e[j+1]=temp;
			}
		}
	for(i=1;i<=n;i++)
	{
	printf("\n%d\t%s\t%d\t%s",e[i].emp_id,e[i].name,e[i].salary,e[i].doj);
	}
}
