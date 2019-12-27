#include<stdio.h>
void copystr(char*,char*);
void main()
{char*str1="I am Dinesh Thakur";
char str2[30];
copystr(str2,str1);
printf("\n %s",str2);
}
void copystr(char *dest,char *src)
{
while(*src!='\0')
*dest++=*src++;
*dest='\0';
return;
}
