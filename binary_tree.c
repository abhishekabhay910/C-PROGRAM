#include <stdio.h>
#include <stdlib.h>

struct node
{
     int data;
     struct node* left;
     struct node* right;
};
 
struct node* temp(int data)
{
     struct node* node = (struct node*) malloc(sizeof(struct node));
     node->data = data;
     node->left = NULL;
     node->right = NULL;
 
     return(node);
}

void postorder(struct node* node)
{
     if (node == NULL)
        return;

     postorder(node->left);
     postorder(node->right);
 
     printf("%d ", node->data);
}
void preorder(struct node* root)
{
	if(root==NULL)
	return;
	
	preorder (root->right);
	preorder(root->left);
 printf("%d ", root->data);
}
int main()
{
     struct node *root  = temp(44);
     root->left             = temp(33);
     root->right           = temp(55);
     root->left->left     = temp(22);
     root->left->right   = temp(34); 
     root->right->left	=temp(45);
     root->right->right=temp(66);
    
 
     printf("\nPostorder traversal of binary tree is \n");
     postorder(root);
 	 printf("\nPreorder traversal of binary tree is \n");
	preorder(root);
     	printf("\n");
     return 0;
}
