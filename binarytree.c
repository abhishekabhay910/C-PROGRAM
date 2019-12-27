#include<stdio.h>
#include<stdlib.h>
struct tree
{
	int data;
	struct tree *left,*right;
}t,*root,*temp;
struct tree * createnode(int x)
{
	struct tree *t;
	t=(struct tree *)malloc(sizeof(t));
	t->data=x;
	t->left=NULL;
	t->right=NULL;
	return t;
}
void preorder()
{
	struct tree* stack[20];
	int top=1;
	stack[1]=NULL;
	temp=root;
	printf("\nPreorder traversed result: ");
	while(temp!=NULL)
	{		
		printf("%d ",temp->data);
		if(temp->right!=NULL)
		{
			top=top+1;
			stack[top]=temp->right;
		}
		if(temp->left!=NULL)
		{
			temp=temp->left;
		}
		else
		{
			temp=stack[top];
			top--;
		}
	}
}

void postorder()
{
	struct tree* stack[20], *rstack[10];
	int top=1,rtop=1;
	stack[top]=NULL;
	rstack[top]=NULL;
	temp=root;
	printf("\nPostorder traversal: "); 
top:
	while(temp!=NULL)
	{
		top++;
		stack[top]=temp;
		if(temp->right!=NULL)
		{
			rtop++;
			rstack[rtop]=temp->right;
			stack[++top]=112;
		}
		temp=temp->left;
		
	}
	temp=stack[top];
	top--;

	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=stack[top];
		top--;
		if(temp==112)
		{
			temp=rstack[rtop];
			rtop--;
			goto top;
		}

	}
	/*if(temp<0)
	{
		temp=-temp;
		goto top;
	}
*/
}
void main()
{
	root=createnode(1);
	root->left=createnode(2);
	root->right=createnode(3);
	root->left->left=createnode(4);
	root->right->left=createnode(6);
	root->left->right=createnode(5);
	root->right->right=createnode(7);
	int ch=0;
	while(1)
	{
		printf("\nBINARY TREE:\n1.Preorder traversal\n2.Postorder traversal\n3.Exit\n\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: preorder();
				break;
			case 2: postorder();
				break;
			case 3: exit(0); break;
			default: printf("Wrong Choice !\n");
		}
	}

}
	



