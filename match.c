#include<stdio.h>
int MatchAny(char s1[],char s2[])
{
	int i,j,k,e1,e2,flag=1,ctr=0;
	for(e1=0;s1[e1]!=NULL;e1++);
	for(e2=0;s2[e2]!=NULL;e2++);
	if(e1==e2)
	{
	for(i=0;s1[i]!=NULL;i++)
	{
	if(s1[i]!=s2[i])
	{
	flag=0;
	break;
	}
	}
	}
	else
	{
	for(i=0,j=0;s2[j]!=NULL;j++)
	{
	if(s1[i]==s2[j]){
	for(i=0,ctr=1,k=j;i<e1;i++,k++)
	{
	if(s1[i]==s2[k])
	ctr=1;
	}
	break;
	}
	}
	if(ctr==0) return -1;
	else return 1;
	}
}
void main()
{
	int result;
	char s1[20],s2[20];
	printf(“Enter 1 st string:\n”);
	gets(s1);
	printf(“Enter 2 nd string(must be greater or equal to the first string)\n”);
	gets(s2);
	result=MatchAny(s1,s2);
	if(result==1) printf(“\n String1 is substring of String2\n”);
	elseif(result==0) 
	printf(“\n String1 is equal to String2\n”);
	else printf(“\n Two strings are completely different”);
}
