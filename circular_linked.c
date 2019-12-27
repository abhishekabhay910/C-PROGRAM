#include<stdio.h>
#include<stdlib.h>
struct Node
{
   int data;
   struct Node *next;
}*head = NULL;
void insertatbeginning()
{
	int value;
	printf("enter data\n");
	scanf("%d",&value);
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = value;
    if(head == NULL)
    {
       head = newNode;
       newNode -> next = head;
    }
    else
    {
       struct Node *temp = head;
       while(temp -> next != head)
          temp = temp -> next;
       newNode -> next = head;
       head = newNode;
       temp -> next = head;
    }
    printf("\nInsertion success!!!");
}
void insertatend()
{
	int value;
	printf("enter data\n");
	scanf("%d",&value);
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode -> data = value;
   if(head == NULL)
   {
      head = newNode;
      newNode -> next = head;
   }
   else
   {
      struct Node *temp = head;
      while(temp -> next != head)
         temp = temp -> next;
      temp -> next = newNode;
      newNode -> next = head;
   }
   printf("\nInsertion success!!!");   
}
void deletefrombeginning()
{
   if(head == NULL)
      printf("List is Empty!!! Deletion not possible!!!");
   else
   {
      struct Node *temp = head;
      if(temp -> next == head)
      {
         head = NULL;
         free(temp);
      }
      else{
         head = head -> next;
         free(temp);
      }
      printf("\nDeletion success!!!");
   }
}
void deletefromend()
{
   if(head == NULL)
      printf("List is Empty!!! Deletion not possible!!!");
   else
   {
      struct Node *temp1 = head, *temp2;
      if(temp1 -> next == head)
      {
         head = NULL;
         free(temp1);
      }
      else{
         while(temp1 -> next != head){
            temp2 = temp1;
            temp1 = temp1 -> next;
         }
         temp2 -> next = head;
         free(temp1);
      }
      printf("\nDeletion success!!!");
   }
}
void display()
{
   if(head == NULL)
      printf("\nList is Empty!!!");
   else
   {
      struct Node *temp = head;
      printf("\nList elements are: \n");
      while(temp -> next != head)
      {
         printf("%d ---> ",temp -> data);
      }
      printf("%d ---> %d", temp -> data, head -> data);
   }
}
void main()
{
   int choice1, choice2, value, location;
   while(1)
   {
      printf("\n*********** MENU *************\n");
      printf("1. Insert at begining\n2. Insert at end\n3. Delete from begining\n4. Delete from end\n5. Display\n6. Exit\nEnter your choice: ");
      scanf("%d",&choice1);
      switch(choice1)
      {
      	case 1: 
		insertatbeginning();
		break;
      	case 2:
		insertatend();
                break;
	case 3:
		deletefrombeginning();
		break;
	case 4:
		deletefromend();
		break;
	case 5:
		display();
	default:
		exit(1);
      }
   }
}

