#include<stdio.h>
#include<string.h>
void new(char b1[5][5], char b2[5][5])
{
    	int i, j, p;
    	for (i=0; i<3; i++)
    	{
        for (j=0; j<3; j++)
        {   
            p = counter(b1,i,j);
            if(b1[i][j]=='@')
            {
                if (p ==2 || p == 3)
                  b2[i][j] = '@';
                else
                  b2[i][j] = '#';
            }
            else if(b1[i][j]=='#')
            {
                if (p == 3)
                  b2[i][j] = '@';
                else
                  b2[i][j] = '#';
                
            }
        
        }
    	}
}

int counter(char b1[5][5],int p, int q) {
    	int count=0;
    	if (b1[p-1][q]=='@')
	{
        count++;
        }
    	if (b1[p-1][q-1]=='@')
	{
        count++;
        }
	if (b1[p-1][q+1]=='@')
	{
        count++;
        }
	if (b1[p][q-1]=='@')
	{
        count++;
        }
	if (b1[p][q+1]=='@')
	{
        count++;
        }
	if (b1[p+1][q-1]=='@')
	{
        count++;
        }
	if (b1[p+1][q]=='@')
	{
        count++;
        }
	if (b1[p+1][q+1]=='@')
	{
        count++;
        }

    	return count;
}
void display(char b1[5][5])
{
	int i,j;
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		printf("%c ",b1[i][j]);
	}printf("\n");
	}
}
int main() {
    	char c;c='a';char b1[5][5],b2[5][5];
	int i,j;
	printf("enter the 1st generation\n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
           getchar();		scanf("%c",&b1[i][j]);
	}
	}
    	display(b1);
    	/*while (c!='n') {
        new(b1,b2);
        display(b1);
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		b1[i][j]=b2[i][j];	
	}
	}
	printf("Would you like to play the Game of Life? (y/n)");
        scanf("%c",&c);
    	} */return 0;
}
