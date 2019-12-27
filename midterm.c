#include<stdio.h>
#include<stdlib.h>
struct dl
{
        int data;
        struct dl *next;
	struct dl *prev;
}s1,*node,*start,*end,*temp;
int count=0;
void construct()
{
        start=NULL;node=NULL;end=NULL;
}
void insert()
{
        int x;
        printf("Enter the element:");   scanf("%d",&x);
        count++;
        node=(struct dl *)malloc(sizeof(s1));
        node->data=x;
        if(start==NULL)
        {
        start=node;
        start->next=NULL;
	start->prev=NULL;        
	end=node;
        }
        else
        {
	end->next=node;
	node->prev=end;
	node->next=NULL;
	end=node; 
 	}
}	
void delete()
{
        if(start==NULL) printf("Queue Underflow!!\n");
        else if(end==start)
        {
        temp=end;
        free(temp);
        start=NULL;end=NULL;
        }
        else
        {
        temp=start;
        count--;
        start=start->next;
        start->prev=NULL;
        free(temp);
	}
}
void deleteo()
{
        if(start==NULL) printf("Queue Underflow!!\n");
        else if(end==start)
        {
        temp=end;
        free(temp);
        start=NULL;end=NULL;
        }
        else
        {
        start=start->next;
        start->prev=NULL;
	for(node=start;node->next!=NULL;node=node->next)
	{
	node->next=node->next->next;
	}
	}
}
void display()
{
        int i;
	if(start==NULL)
        printf("\nQueue underflow!\n");
        else
        {
        printf("\nThe elements are:\n");
        for(node=start;node!=NULL;node=node->next)
        printf("%d ",node->data);
	}
}
void main()
{
        int ch;
        construct();
        while(1)
        {
                printf("\n*Doubly Linked List*\n1. Insert\n2. Delete element from odd position\n3. Display\n4. Exit\n");
                scanf("%d",&ch);
                switch(ch)
                {
                case 1: insert(); break;
                case 2: deleteo(); break;
                case 3: display(); break;
                case 4: exit(0); break;
                default: printf("\nWrong Choice!!\n");
                }
	}
}
