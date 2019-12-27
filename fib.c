#include<stdio.h>
void fib(int);
int main()
{
	int k, n, x;
	long int i=0, j=1, f;
	printf("ENTER NUMBER OF TERMS\n");
	scanf("%d",&n);
	printf("FIBONACCI SERIES:%d  %d",  0,  1  );
	x=n-2;
	fib(x);
	return 0;
}
void fib(int x)
{
	static long int first=0, second=1, sum;
	if(x>0)
	{
	sum= first+ second;
	first=second;
	second=sum;
	printf("  %ld  ",  sum  );
	fib(x-1);
	}
}
