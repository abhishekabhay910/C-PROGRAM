#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void rightshift(int p[],int first[],int new)
{
    	int i=0;
    	while(new-i-1)
    	{
        	first[new-i-1]=first[new-i-2];
        	i++;
    	}
    	first[0]=p[new-1];
    	i=0;
    	while(new-i-1)
    	{
        	p[new-i-1]=p[new-i-2];
        	i++;
    	}
} 
int main()
{
 
    	printf("\n***BOOTH's Algorithm***\n"); 
    	printf("00 Right Shift.\n");
    	printf("01 Add M to A,Then Right Shift.\n");
    	printf("10 Add -M to A,Then Right Shift.\n");
    	printf("11 Right Shift.\n");
    	printf("\n");
    	int a,b;
    	printf("Enter two numbers that are to be multiplied : \n");
	printf("Enter 1st number: ");
        scanf("%d", &a);
        printf("Enter 2nd number: ");
        scanf("%d", &b);
    	int a1=a,b1=b;
	if(a1<0) 
		a1*=-1;
	if(b1<0) b1*=-1; if(b1>a1) 
	{
		a1=b1+a1-(b1=a1);
		a=b+a-(b=a);
	}
    	int x=a1,y=b1;
    	int A[35]={};
    	int B[35]={};
    	int i=0;
	while(x>0)
	{
		A[i]=x%2;
		i++;
		x=x/2;
	}
    	A[i]=0;
    	int j=0;
	while(y>0)
	{
		B[j]=y%2;
		j++;
		y/=2;
	}
	while(j<=i) 
		B[j++]=0;
   	int new=i+1; 
    	i=0;j=0;
	while(i<new/2) 
	{
		A[i]=A[new-i-1]+A[i]-(A[new-i-1]=A[i]);
	        i++;
	}
    	i=0;
	while(i<new/2) 
	{
		B[i]=B[new-i-1]+B[i]-(B[new-i-1]=B[i]);
		i++;
	} 
    	int first[35]={0};
    	int second[35]={0};
    	i=0;
    	if(a>=0) 
	{ 
		while(i<new)
	        first[i]=A[i+++1];
    	}
	else 
	{
        	while(i<new)
		{
			if(A[i]==0)
			first[i]=1;
			else
			first[i]=0;
			i++;
		}
	    	i=1;
	    	first[new-i]++;
		while(first[new-i]==2)
		{
			first[new-i]=0;
			i++;
			first[new-i]++;
		}
	}
    	i=0;
    	if(b>=0)
	{
		while(i<new)
                second[i]=B[i+++1];
    	}
    	else
	{
	        while(i<new)
		{
			if(B[i]==0)
			second[i]=1;
			else second[i]=0;
			i++;
		}
	     	i=1;
	     	second[new-i]++;
		while(second[new-i]==2)
		{
			second[new-i]=0;
			i++;
			second[new-i]++;
		}
	}
    	printf("\n"); 
    	printf("Multiplicand (Q) %d -> ",a);
    	i=0;
    	while(i<new)
	printf("%d",first[i++]); 
    	printf(" and Multiplier (M) %d -> ",b);
    	i=0;
        while(i<new)
        printf("%d",second[i++]);
    	printf("\n");
    	i=0;
    	int third[35]={0};
	if(b<0)
	{
	        while(i<new)
	        third[i]=B[i+++1];
	}
	else
	{
	        while(i<new)
		{
			if(B[i]==0)
			third[i]=1;
			else
			third[i]=0;
			i++;
		}
		i=1;
		third[new-i]++;
		while(third[new-i]==2)
		{
			third[new-i]=0;
			i++;
			third[new-i]++;
		}
	} 
    	printf("we use -(M) i.e. %d -> ",-b);
    	i=0;
	    	while(i<new)
 	    	printf("%d",third[i++]);
    		printf("\n");
    	int q=0;
    	int p[35]={0}; 
    	int steps=new;
    	printf("\n");
    	printf("Step No. "); 
    	i=0;
 	while(i<new)
	{
	        if(i*2==new || i*2==new-1)
	        printf("A");
	        else
	        printf(" ");
	        i++;
	}
    	printf(" ");
    	i=0;
	while(i<new)
	{
	        if(i*2==new || i*2==new-1)
	        printf("Q");
	        else
	        printf(" ");
	        i++;
	}
    	printf(" Q-1");
    	printf("\n");
    	j=0;
    	while(steps--) 
    		{ 
        	printf("%d         ",j++);
        	i=0;
        	while(i<new)
		printf("%d",p[i++]);
        	printf(" ");
        	i=0;
		while(i<new)
   		printf("%d",first[i++]);
        	printf(" ");
        	printf("%d\n",q);
		if(first[new-1]==0 && q==0)
		{
		q=first[new-1];
	        rightshift(p,first,new);
		}
		else if(first[new-1]==0 && q==1) 
		{
	        printf("        + ");
	        i=0;
	        while(i<new)
	        printf("%d",second[i++]);
	        i=0;
	        while(i<new)
	        {
	        p[new-i-1]+=second[new-i-1];
	        if(p[new-i-1]==2)
	        {
	        p[new-i-1]=0;
	        if(new-i-1!=0)
	        p[new-i-2]++;
        	}
                if(p[new-i-1]==3)
                {
                	p[new-i-1]=1;
                	if(new-i-1!=0)
                	p[new-i-2]++;
                }
                i++;
        	}
        	printf("\n          ");
        	i=0;
        	while(i<new)
        	printf("%d",p[i++]);
        	printf("\n");
        	q=first[new-1];
        	rightshift(p,first,new);
        	}
        	else if(first[new-1]==1 && q==0) 
        	{
            	printf("        + ");
            	i=0;
            	while(i<new)
                printf("%d",third[i++]);
            	i=0;
            	while(i<new)
            	{
                p[new-i-1]+=third[new-i-1];
                if(p[new-i-1]==2)
                {
                p[new-i-1]=0;
                if(new-i-1!=0)
                p[new-i-2]++;
                }
                if(p[new-i-1]==3)
                {
                p[new-i-1]=1;
                if(new-i-1!=0)
                p[new-i-2]++;
                }
                i++;
            	}
            	printf("\n          ");
            	i=0;
            	while(i<new)
                printf("%d",p[i++]);
            	printf("\n");
            	q=first[new-1];
            	rightshift(p,first,new);
        	}
        	else if(first[new-1]==1 && q==1) 
        	{
            	q=first[new-1];
            	rightshift(p,first,new);
        	}
    		}
    		printf("%d         ",j);
    		i=0;
		while(i<new)
		printf("%d",p[i++]);
    		printf(" ");
    		i=0;
		while(i<new)
		printf("%d",first[i++]);
    		printf(" ");
    		printf("%d\n",q);
    		printf("\n");
    		printf("Product in signed binary number is : "); 
    		i=0;
    		while(i<new)
        	printf("%d",p[i++]);
    		i=0;
    		printf(" ");
    		while(i<new)
        	printf("%d",first[i++]);
    		printf("\n");
		printf("Product in decimal is: %d\n",a*b);
    		return 0;
}
