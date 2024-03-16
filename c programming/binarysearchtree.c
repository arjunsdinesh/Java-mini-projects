#include<stdio.h>
#include<stdlib.h>


struct Node{
int data;
struct Node* left;
struct Node* right;
};

struct Node* createNode(int data)
{
struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=data;
newNode->left=newNode->right=NULL;
return(newNode);
}


void inOrderTraversal(struct Node* root)
{
if(root!=NULL)
{
inOrderTraversal(root->left);
printf("%d,",root->data);
inOrderTraversal(root->right);
}
}


void preOrderTraversal(struct Node* root)
{
if(root!=NULL)
{
printf("%d,",root->data);
preOrderTraversal(root->left);
preOrderTraversal(root->right);
}
}


void postOrderTraversal(struct Node* root)
{
if(root!=NULL)
{
postOrderTraversal(root->left);
postOrderTraversal(root->right);
printf("%d,",root->data);
}
}

struct Node* insert(struct Node* root, int key)
{
    if (root == NULL)
    {
        return createNode(key);
    }
    else if (key < root->data)
    {
        root->left = insert(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = insert(root->right, key);
    }
    return root;
}


int main()
{
struct Node* root=NULL;
int choice,key,nodes;
printf("Enter the number of nodes:\n");
scanf("%d",&nodes);
printf("Enter %d keys for the Binary tree:\n",nodes);
for(int i=0;i<nodes;++i)
{
printf("Node %d: ",i+1);
scanf("%d",&key);
root = insert(root,key);
}
while(1)
{
printf("\nChoose a traversal method\n");
printf("1.In-order traversal\n2.Pre-order traversal\n3.Post-order traversal\n4.Exit\n");
printf("enter your choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("Inorder traversal:");
inOrderTraversal(root);
break;
case 2:printf("pre-order traversal: ");
preOrderTraversal(root);
break;
case 3:printf("Post-order traversal: ");
postOrderTraversal(root);
break;
case 4:return(0);
break;
default:printf("Inavalid Choice");
break;
}
}
printf("\n");
return(0);
}