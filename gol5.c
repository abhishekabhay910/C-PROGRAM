#include<stdio.h>
#include<string.h>
#include<stdio.h>
int main() {
    	char c;c='a';char b[5][5][5];
	int i,j,g,l,m,n;
	printf("enter number of rows\n");
	scanf("%d",&m);
	printf("enter number of column\n");
	scanf("%d",&n);
	printf("enter number of generation\n");
	scanf("%d",&l);
	printf("enter the 1st generation\n");
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
        scanf("%s",&b[0][i][j]);
	}
	}
	for(g=0;g<l;g++)
	{
    	for (i=0; i<m; i++)
    	{
        for (j=0; j<n; j++)
        {   
            int p=0;
    	if (b[g][i-1][j]=='@')
	{
        p++;
        }
    	if (b[g][i-1][j-1]=='@')
	{
        p++;
        }
	if (b[g][i-1][j+1]=='@')
	{
        p++;
        }
	if (b[g][i][j-1]=='@')
	{
        p++;
        }
	if (b[g][i][j+1]=='@')
	{
        p++;
        }
	if (b[g][i+1][j-1]=='@')
	{
        p++;
        }
	if (b[g][i+1][j]=='@')
	{
        p++;
        }
	if (b[g][i+1][j+1]=='@')
	{
        p++;
        }

            if(b[g][i][j]=='@')
            {
                if (p ==2 || p == 3)
                  b[g+1][i][j] = '@';
                else
                  b[g+1][i][j] = '#';
            }
            else if(b[g][i][j]=='#')
            {
                if (p == 3)
                  b[g+1][i][j] = '@';
                else
                  b[g+1][i][j] = '#';
                
            }
        
        }
    	}
	}
	for(g=0;g<l;g++)
	{
	printf("generation %d\n",g);
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
        printf("%s  ",&b[g][i][j]);
	}printf("\n");
	}
	}
}
