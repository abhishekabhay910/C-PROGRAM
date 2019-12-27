#include<stdio.h>
#include<stdlib.h>

struct list
{
        int num;
        struct list *next;
}s,*node,*temp,*start;

void main()
{
        int i,ch=0,pos,ctr;
        start=(struct list *)malloc(sizeof(s));
        node=start;
        for(i=1;i<=5;i++)
        {
                node->next=(struct list *)malloc(sizeof(s));
                node->num=i;
                node=node->next;
        }
        node->next=NULL;
        top:
        printf("\n\n\n1) Insert an element at the begining\n2) Insert an element at nth position\n3) Insert an element at the end\n4) Delete an element from the start\n5) Delete an element from nth position\n6) Delete the last element\n7) Display elements \n\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
                case 1:
                temp=(struct list *)malloc(sizeof(s));
                temp->next=start;
                start=temp;
                printf("Enter your input:");scanf("%d",&temp->num);
                break;

                case 2:
                printf("Enter the position at which you want to input:");scanf("%d",&pos);
                for(i=1,node=start;i<pos-1;i++,node=node->next);
                temp=(struct list *)malloc(sizeof(s));
                temp->next=node->next;
                node->next=temp;
                printf("Enter your input:");scanf("%d",&temp->num);
                break;
	case 3:
                for(node=start;node->next!=NULL;node=node->next);
                temp=(struct list *)malloc(sizeof(s));
                node->next=temp;
                temp->next=NULL;
                printf("Enter your input:");scanf("%d",&node->num);
                break;

                case 4:
                temp=start;
                start=start->next;
                free(temp);
                break;

                case 5:
                printf("Enter the position at which you want to delete the node:");scanf("%d",&pos);
                for(i=1,node=start;i<pos-1;i++,node=node->next);
                temp=node->next;
                node->next=node->next->next;
                free(temp);
                break;

                case 6:
                for(ctr=1,node=start;node->next->next!=NULL;ctr++,node=node->next);
                temp=node->next;
                node->next=NULL;
                free(temp);
                break;

                case 7: break;
                default:
                printf("\nWrong input!!\n");

        }

        printf("\nThe current list is as follows:\n");
        for(node=start;node->next!=NULL;node=node->next)
        {
                printf("%d ",node->num);
        }
	 printf("\ndo you want to continue:(1/0)");
        scanf("%d",&ch);
        if(ch==1) goto top;
}


