#include <stdio.h>
#include <stdlib.h>

struct node{
   int data;
   struct node *next;
};
struct node *head=NULL,*x,*y;
int n;

void create();
void ins_at_end(int );
void display();
int sum();

void main(){
 int ch;

 while(1){
  printf("\n1.Creation");
  printf("\n2.Dispaly");
  printf("\n3.Insert at end");
  printf("\n4.Exit");
  printf("\nEnter your choice:");scanf("%d",&ch);

   switch(ch){
      case 1:create();break;
      case 2:display(); break;
      case 3:ins_at_end(n); break;
      default:  exit(0);

 }
}

}

void create(){
  int c;
  x=(struct node*)malloc(sizeof(struct node));
  printf("\n Enter the data:"); scanf("%d",&x->data);x->next=x;head=x;
 printf("\n If you wish to continue (1,0):"); scanf("%d",&c);
  while(c!=0){
    y=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter the data:"); scanf("%d",&y->data);
    x->next=y;
    y->next=head;
    x=y;
    printf("\n If you Wish to continue (1,0):"); scanf("%d",&c);
    }
 
   n=sum();
 
   printf(" \nSum:%d",n);

}

void ins_at_end(int k){

    x = head;
    y = (struct node*)malloc(sizeof(struct node));

   while(x->next!=head) x=x->next;
   
    y->data=k;
    x->next=y;
    y->next=head;
    x=y;
 
}

void display(){
	
 if(head==NULL) printf("\n List is empty");
 else{
  x=head;
  printf("\n");
 while(x->next!=head){ 
   printf("%d->", x->data);
   x=x->next; 
 }
 printf("%d->",x->data);
}
}

int sum(){

 x=head; int l;
 while(x->next!=head) { if(x->data%2==0) l=l+x->data;   x=x->next;} if(x->data%2==0) l=l+x->data;
 
return l;
}
