#include<stdio.h>

void foo(int [][3]);
main(){

 int i,j,a[3][4]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
 

for(i=0;i<3;i++) {
for(j=0;j<3;j++) {
  printf(" %d",a[i][j]);} printf("\n");}  foo(a);
 printf("%d",a[2][1]);

}
 
 void foo(int b[][4]) {
 int i,j;
 ++b; 
for(i=0;i<3;i++) {
for(j=0;j<3;j++) {
  printf(" %d",b[i][j]);} printf("\n");} 
 b[1][1]=9;

}
