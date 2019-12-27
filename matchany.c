#include<stdio.h>
void Matchany(char s1, char s2)
{
	int i,j,e1,e2,flag=1,max;
	for(e1=0;s1[e1]!=NULL;e1++)
	for(e2=0;s2[e2]!=NULL;e2++)
	if(e1==e2)
	{
		for(i=0;s1[i]==s2[i];i++)
		{
		if(s1[i]!=s2[i]) flag=0; break;
		}
		if(flag==1) return 0;
		else return -1;
	}
	else
	{
		e1>e2?max=e1:max;
	}

}
void main()
{
	char s1[20], s2[20];
	printf("ENTER 1st STRING\n");
	gets(s1);
	printf("ENTER 2nd STRING\n");
	gets(s2);
	result=Matchany(s1,s2);
	if(result==1)
	printf("STRING1 IS A SUBSTRING OF STRING2\n");
	else if(result==0)
	printf("STRING1 IS EQUAL TO STRING2\n");
	else
	printf("BOTH THE STRINGS ARE COMPLETELY DIFFERENT\n");
}
