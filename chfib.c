 #include<stdio.h>
int main()
{
 int a,b,c,next,num;
 printf("Enter any number: ");
 scanf("%d", &num);
 if((num==0)||(num==1))
   printf("\n%d is a Fibonacci term",num);
 else
 {
   a=0;
   b=1;
   c=a+b;
   while(c<num)
   {
     a=b;
     b=c;
     c=a+b;
   }
   if(c==num)
     printf("\n%d is a Fibonacci term",num);
   else
     printf("\n%d is not a Fibonacci term",num);
 }
 return 0;
}
