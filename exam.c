#include<stdio.h>
void main()
{
	char str1[100], str2[100];
	printf("enter the string\n");
	gets(str1);
	int ctr=0,count=0,i,j,k=0;
	for(i=0;str1[i]!='\0';i++)
	{
		if(count<=1)
		{
		str2[k]=str1[i];
		k++;ctr++;}
		for(j=0;j<100;j++)
		{
		if(str1[i]==str2[j])
		count++;
		}
	}
	str2[k]='\0';
	printf("the string is:%s\n",str2);
	printf("length of string is:%d\n",ctr);
}
