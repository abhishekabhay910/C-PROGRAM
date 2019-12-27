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

void insertb()
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
        node->next=start;
	start->prev=node;
	node->prev=NULL;	
	start=node;
        }
}

void inserte()
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

void deletee()
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
        temp=end;
        count--;
        end=end->prev;
	end->next=NULL;
        free(temp);
	}
}

void deleteb()
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

void display()
{
        int i;
	if(start==NULL)
        printf("\nQueue underflow!\n");
        else
        {
        printf("\nThe elements are:\n");
        for(node=start;node!=NULL;node=node->next)
        //for(node=start,i=0;i<count;i++,node=node->next)
                printf("%d ",node->data);
	}
}
void main()
{
        int ch;
        construct();
        while(1)
        {
                printf("\n\n***Doubly Link List***\n1.Insert at beginning\n2.Insert at end\n3.Delete from begining\n4.Delete from end\n5.Display\n6.Exit\nEnter your choice:\n");
                scanf("%d",&ch);
                switch(ch)
                {
                case 1: insertb(); break;
                case 2: inserte(); break;
                case 3: deleteb(); break;
                case 4: deletee(); break;
                case 5: display(); break;
                case 6: exit(0); break;
                default: printf("\nWrong Choice!!\n");
                }
        }
}



