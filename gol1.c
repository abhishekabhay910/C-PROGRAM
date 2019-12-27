#include <stdio.h>
#include <string.h>
 
void display (char b1[][4], char b2[][4]);
void new_board (char b1[][4], char b2[][4]);
void copy_back (char b1[][4], char b2[][4]);
int next_cells (int p, int q);
  
char b1[][4]={	"@@#",
		"#@#",
		"#@#"};
 
char b2[3][4];
 
int main() {
    char c;
    display(b1, b2);
    printf("Hi! Would you like to play the Game of Life? (y/n)");
    c = getchar();
    while (c == 'y') {
        new_board(b1, b2);
        copy_back(b1, b2);
        display(b1, b2);
        c = getchar();
    }
}
 
void display(char b1[][4], char b2[][4]) {
    int i;
    for (i=0; i<3; i++) {
        printf("%s \n", b1[i]);
    }
}
 
void new_board(char b1[][4], char b2[][4])
{
    int i, j, p;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            p = next_cells(i,j);
            if(b1[i][j]=='@')
            {
                if (p ==2 || p == 3)
                {
                    b2[i][j] = '@';
                }
                else
                {
                    b2[i][j] = '#';
                }
            }
            else
            {
                if (p == 3)
                {
                    b2[i][j] = '@';
                }
                else
                {
                    b2[i][j] = '#';
                }
            }
        }
    }
    b2[i][j] = '\0';
}
 
void copy_back(char b1[][4], char b2[][4]) {
    int i;
    for (i=0; i<3; i++) {
        strcpy(b1[i], b2[i]);
    }
}
 
int next_cells(int p, int q) {
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
