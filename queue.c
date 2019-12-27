#include<stdio.h>
#include<stdlib.h>
#define max 50
int queue[max];
int rear=-1;
int front=-1;
void insert()
{
        int item;
        if(rear==max-1)
        printf("QUEUE OVERFLOW\n");
        else
        {
        if(front==-1)
        front=0;
        printf("INSERT THE ELEMENT IN QUEUE\n");
        scanf("%d",&item);
        rear=rear+1;
        queue[rear]=item;
        }
}
void delete()
{
        if(front==-1||front>rear)
        {
        printf("QUEUE OVERFLOW\n");
        return;
        }
        else
        {
        printf("ELEMENT DELETED FROM QUEUE IS: %d\n",queue[front]);
        front=front+1;
        }
}
void display()
{
        int i;
        if(front==-1)
        printf("QUEUE IS EMPTY\n");
        else
        {
        printf("QUEUE IS :\n");
        for(i=front;i<=rear;i++)
        printf("%d\n",queue[i]);
        printf("\n");
	}
}
void main()
{
    int ch;
    while(1)
    {
        printf("\n*** Queue Menu ***");
        printf("\n\n1.Insert\n2.Delete\n3.Display\n4.Exit");
        printf("\n\nEnter your choice(1-4):");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insert();
                    break;
            case 2: delete();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default: printf("\nWrong Choice!!");
        }
    }
}

