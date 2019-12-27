#include <stdio.h>
#include <stdlib.h>

struct node {
   int data; 
	
   struct node *left;
   struct node *right;
};

struct node *root = NULL;

void insert(int data) {
   struct node *temp = (struct node*) malloc(sizeof(struct node));
   struct node *current;
   struct node *parent;

   temp->data = data;
   temp->left = NULL;
   temp->right = NULL;

   
   if(root == NULL) {
      root = temp;
   } else {
      current = root;
      parent = NULL;

      while(1) { 
         parent = current;
         
         
         if(data < parent->data) {
            current = current->left;                
            
            
            if(current == NULL) {
               parent->left = temp;
                       current = current->right;

          
            if(current == NULL) {
               parent->right= temp;
               return;
            }
         }
      }            
   }
}


void preorder(struct node* root)
{
	if(root==NULL)
	return;
	
	preorder (root->right);
	preorder(root->left);
 printf("%d ", root->data);
}
int main() {
   int i;
   int array[7] = {44,33,55,22,34,45,66};

   for(i = 0; i < 7; i++)
      insert(array[i]);

  

   printf("\nPost order traversal: ");
   preorder(root);       
   printf("\n");
   return 0;
}
