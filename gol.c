#include<stdio.h>
int x,actr,hctr;
int matrix9(char arr[],int a)
{
	for(x=0,actr=0,hctr=0;x<9;x++)
	{
		
		if(x==a) continue;
		else
		{ 
		if(arr[x]=='@')	
		actr++;
		else if(arr[x]=='#')
		hctr++;
		} 
	}
	if(arr[a]=='#' && actr==3) return 1;	
	else if(arr[a]=='@' && actr==3) return 1;
	else if(arr[a]=='@' && actr==2) return 1;
	else return 0;
		
}
int matrix4(char arr[],int a)
{
	for(x=0,actr=0,hctr=0;x<4;x++)
	{
		
		if(x==a) continue;
		else
		{ 
		if(arr[x]=='@')	
		actr++;
		else if(arr[x]=='#')
		hctr++;
		} 
	}
	if(arr[a]=='#' && actr==3) return 1;	
	else if(arr[a]=='@' && actr==3) return 1;
	else if(arr[a]=='@' && actr==2) return 1;
	else return 0;
}
	
int matrix6(char arr[],int a)
{
	for(x=0,actr=0,hctr=0;x<6;x++)
	{
		
		if(x==a) continue;
		else
		{ 
		if(arr[x]=='@')	
		actr++;
		else if(arr[x]=='#')
		hctr++;
		} 
	}
	if(arr[a]=='#' && actr==3) return 1;	
	else if(arr[a]=='@' && actr==3) return 1;
	else if(arr[a]=='@' && actr==2) return 1;
	else return 0;
}


void main()
{
	int r=3,c=3,i,j,a,b,k,gen,fix,result;
	char arr9[9],arr4[4],arr6[6];
//	printf("Enter row and columns respectively:");
//	scanf("%d%d",&r,&c);
	char arr[r][c],arrnew[r][c];
	printf("Enter the inputs:");
	for(i=0;i<r;i++)
	{ for(j=0;j<c;j++)
	  {
		scanf("%c",&arr[i][j]);
		getchar();
	  }
	}
	printf("\nEnter number of Generations:");
	scanf("%d",&fix);
	printf("\nGeneration 1:\n");
	for(i=0;i<r;i++)
	{for(j=0;j<c;j++)
	 {	
		printf("%c ",arr[i][j]);
	 }printf("\n");	
	}	

	for(gen=2;gen<=fix;gen++)
	{
	  for(i=0;i<r;i++)
	  { for(j=0;j<c;j++)
	    {
		if(i==0 && j==0)
		{ arr4[0]=arr[0][0];arr4[1]=arr[0][1];arr4[2]=arr[1][0];arr4[3]=arr[1][1];
		  result=matrix4(arr4,0);
		}
		
		else if(i==0 && j==c-1)
		{ arr4[0]=arr[0][c-2];arr4[1]=arr[0][c-1];arr4[2]=arr[1][c-2];arr4[3]=arr[1][c-1];
		  result=matrix4(arr4,1);
		}
		
		else if(i==r-1 && j==0)
		{ arr4[0]=arr[r-2][0];arr4[1]=arr[r-2][1];arr4[2]=arr[r-1][0];arr4[3]=arr[r-1][1];
		  result=matrix4(arr4,2);
		}
		
		else if(i==r-1 && j==c-1)
		{ arr4[0]=arr[r-2][c-2];arr4[1]=arr[r-2][c-1];arr4[2]=arr[r-1][c-2];arr4[3]=arr[r-1][c-1];
		  result=matrix4(arr4,3);
		}
			
		else if(i==0)
		{ for(a=0,k=0;a<2;a++)
		  for(b=j-1;b<j+2;b++)
		  {
			arr6[k++]=arr[a][b];
		  }
		  result=matrix6(arr6,1);
		}
		  	
		else if(i==r-1)
		{ for(a=r-2,k=0;a<r;a++)
		  for(b=j-1;b<j+2;b++)
		  {
			arr6[k++]=arr[a][b];
		  }
		  result=matrix6(arr6,4);
		}
		
		else if(j==0)
		{ for(a=i-1,k=0;a<i+2;a++)
		  for(b=0;b<2;b++)
		  {
			arr6[k++]=arr[a][b];
		  }
		  result=matrix6(arr6,2);
		}
			
		else if(j==c-1)
		{ for(a=i-1,k=0;a<i+2;a++)
		  for(b=c-2;b<c;b++)
		  {
			arr6[k++]=arr[a][b];
		  }
		  result=matrix6(arr6,3);
		}
		
		else		
		{for(a=i-1,k=0;a<i+2;a++)
		 { for(b=j-1;b<j+2;b++)
		  {
			arr9[k++]=arr[a][b];
		  } 
		 }
		 result=matrix9(arr9,4);
		}
		if(result==1) arrnew[i][j]='@';
	    	else arrnew[i][j]='#';
	    }								//j closed
	    
	  }								//i closed
	  printf("\nGeneration %d:\n",gen);
	  for(a=0;a<r;a++)
	  {for(b=0;b<c;b++)
	   {	printf("%c ",arrnew[a][b]);
		arr[a][b]=arrnew[a][b];
	   }printf("\n");	
	  }	
	  
	}								//g closed
}
