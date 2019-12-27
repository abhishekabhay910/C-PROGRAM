#include<stdio.h>
#define HEIGHT 25
#define WIDTH 25

typedef char TableType[HEIGHT][WIDTH];

void askUser(TableType tableA,int row,int col) {
   int i,n,height,width;
  printf("Enter the amount of initial organisms: "); scanf("%d",&n);
  printf("Enter dimensions where:\n"); 
  for(i=0;i<n;i++){
	  printf("Organism %d will live: ",i+1);
	  printf("\nx:"); scanf("%d",&height);
	  printf("y:"); scanf("%d",&width);
          tableA[height][width]=1;
}
printTable(tableA,row,col);printf("  -> Generation 0\n");
}

int getNeighborValue(TableType table,int row,int col,int r,int c) {
   if (row<0||row>=r||col<0||col>=c||table[row][col]!=1)
   return 0;
   else 
   return 1;
}

int getNeighborCount(TableType table, int row, int col,int r,int c) {
  int neighbor=0;
  neighbor+=getNeighborValue(table,row-1,col-1,r,c);
  neighbor+=getNeighborValue(table,row-1,col,r,c);
  neighbor+=getNeighborValue(table,row-1,col+1,r,c);
  neighbor+=getNeighborValue(table,row,col-1,r,c);
  neighbor+=getNeighborValue(table,row,col+1,r,c);
  neighbor+=getNeighborValue(table,row+1,col-1,r,c);
  neighbor+=getNeighborValue(table,row+1,col,r,c);
  neighbor+=getNeighborValue(table,row+1,col+1,r,c);
  return neighbor;
}

void calculate(TableType tableA,int row,int col) {
 TableType tableB;
 int neighbor,height,width;
 for(height=0;height<row;height++) {
    for(width=0;width<col;width++) {
     neighbor=getNeighborCount(tableA,height,width,row,col);
     if(neighbor==3)  tableB[height][width]=1;
     else if(neighbor==2&&tableA[height][width]==1)  tableB[height][width]=1;
     else  tableB[height][width]=0;
 }
}
for(height=0;height< HEIGHT;height++) {
 for(width=0;width<col;width++)
   tableA[height][width]=tableB[height][width];
}}

void printTable(TableType table,int row,int col)
{
   int height,width;
   for(height=0;height<row;height++) {
	  printf("\n");
	  for(width=0;width<col;width++){
            if(table[height][width]==1)  printf("@");
	    else  printf("#");
   }}
}

void clearTable(TableType table,int row,int col) {
int height,width;
for(height=0;height<row;height++) {
  for(width=0;width<col;width++) {
        table[height][width]=0;
}}}

void main(){

   TableType table;
   char end;
   int r,c,gen=0;
   
   printf("Enter Size of:");
   printf("Row:"); scanf("%d",&r);
   printf("Column:"); scanf("%d",&c);
   end='a';
   clearTable(table,r,c);
   askUser(table,r,c);

   do{
	  calculate(table,r,c);
	  printTable(table,r,c);printf("  -> Generation %d\n",++gen);
	  printf("\nPress q(quit) or 1(continue): ");scanf(" %c",&end);
   }while(end!='q');
}

