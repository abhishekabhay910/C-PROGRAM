#include<stdio.h>
#include<stdlib.h>
struct tree
{
	int data;
	struct tree *left,*right;
}t,*temp=NULL,*node=NULL,*root=NULL,*par=NULL;
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
void insert(int x)
{
	if(root==NULL)
	{
		root=(struct tree*)malloc(sizeof(t));
		root->data=x;
		root->left=NULL;
		root->right=NULL;
	}
	else
	{
		temp=root;
		while(temp!=NULL)
		{
			if(x<temp->data && temp->left==NULL)
			{
				temp->left=(struct tree*)malloc(sizeof(t));
				temp=temp->left;
				temp->data=x;
				temp->left=NULL;
				temp->right=NULL;
				return;
			}
			else if(x>temp->data && temp->right==NULL)
			{
				temp->right=(struct tree*)malloc(sizeof(t));
				temp=temp->right;
				temp->data=x;
				temp->left=NULL;
				temp->right=NULL;	
				return;
			}

			if(x<temp->data)
				temp=temp->left;
			else if(x>temp->data)
				temp=temp->right;
			else if(x=temp->data)
			{
				printf("\nData already exists !\n");
				return;
			}
		}

	}
}
void find(int x)
{
	if(root==NULL)
	{
		printf("\nNo DATA present !\n");
	}
	else
	{
	temp=root;
	while(temp!=NULL)
	{
		if(x<temp->data)
			temp=temp->left;
		else if(x>temp->data)
			temp=temp->right;
		else if(x=temp->data)
		{
			printf("\n%d exists !\n",x);
			return;
		}
	}
	printf("\n%d does not exists in the BST !\n",x);
	}
}
void delete(int x)
{
	par=NULL;
	if(root==NULL)
	{
		printf("\nNo DATA present !\n");
	}
	else
	{
	temp=root;
	while(temp!=NULL)
	{

		if(x==temp->left->data)
		{	par=temp;	temp=temp->left; 	node=temp;	temp=temp->right;	temp->left=node->left;	par->left=temp;	free(node);
			return;
		}
		if(x==temp->right->data)
		{	par=temp;	temp=temp->right; 	node=temp;	temp=temp->right;	temp->left=node->left;	par->right=temp;free(node);
			return;
		}
		if(x<temp->data)
			temp=temp->left;
		else if(x>temp->data)
			temp=temp->right;
	}
	printf("\n%d does not exists in the BST !\n",x);
	}
}
void main()
{
	int ch=0,x;
	while(1)
	{
		printf("\nBINARY TREE:\n1.Find\n2.Insert\n3.Delete\n4.Preorder traversal\n5.Exit\n\nEnter your choice:");
		scanf("%d",&ch);
		if(ch==1||ch==2||ch==3)
		{
			printf("Enter the element:"); scanf("%d",&x);
		}
		switch(ch)
		{
			case 1: find(x);
				break;
			case 2: insert(x);
				break;
			case 3: delete(x);
				break;
			case 4: preorder();
				break;
			case 5: exit(0); break;
			default: printf("Wrong Choice !\n");
		}
	}
}
