#include<stdio.h>
#include<stdlib.h>

struct node{
 int num;
 struct node *ptr;
};

int main(){

typedef struct node NODE;
 NODE *head,*first,*temp=0;
int count=0,choice=1;
  first=0;
while(choice){
 head=(NODE *)malloc(sizeof(NODE));
 printf("Enter data:"); scanf("%d",&head->num);
 if(first!=0){
  temp->ptr=head;
   temp=head;
 }
 else
    first=temp=head;
 printf("\nDo you Want to Continue(0 or 1):"); scanf("%d",&choice);
}
 temp->ptr=0;
 temp=first;
printf("\nlinked List\n");
while(temp!=0){
 printf("%d > ",temp->num); count++; 
 temp=temp->ptr;
}
  printf("NULL\n");
  printf("No of Nodes: %d",count);
return 0;
}
