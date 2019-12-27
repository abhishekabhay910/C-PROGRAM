#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};
void cbt(int n)
{
	struct node *node=(struct node*)malloc(sizeof(struct node*));
	if(node==NULL)
	{
		node->data=n;
		node->left=NULL;
		node->right=NULL;
		return;
	}
	else
	{
		if(n<node->data)
		{
		node->left->data=n;
		node->left->left=NULL;
		node->left->right=NULL;
		}
		else if(n>node->data)
		{
		node->right->data=n;
		node->right->left=NULL;
		node->right->right=NULL;
		}
	return;
	}
}
void preorder(struct node * node)
{
	if(node==NULL)
	return;
	printf("%d ", node->data);
	preorder(node->left);
	preorder(node->right);
}
void main()
{
	int ch, n;
	printf("1.to enter element in binary tree\n2. preorder traversal\n");
	printf("enter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	printf("enter the element\n");
	scanf("%d",&n);
	cbt(n);
	break;
/*	case 2:
	preorder(node);
	break;*/
	case 3:
	exit(0);
	default:
	printf("wrong input\n");
	}
}

