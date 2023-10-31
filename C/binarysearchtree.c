#include<stdio.h>
#include<stdlib.h>

struct node
{
    int key;
    struct node *left,*right;
};
struct node* newNode(int item)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
struct node* insert(struct node* node,int key)
{
    if(node == NULL)
    {
        return newNode(key);
    }
    if(key < node->key)
    {
        node->left = insert(node->left,key);
    }
    else if(key > node->key)
    {
        node->right = insert(node->right,key);
    }
}
struct node* search(struct node* root,int key)
{
    if(root == NULL || root->key == key)
    {
        return root;
    }
    if(root->key < key)
    {
        return search(root->right,key);
    }
    return search(root->left,key);
}
int main()
{
    int val,n,i,key;
    struct node* root = NULL;
    printf("Enter the number of nodes in the tree: ");
    scanf("%d",&n);
    printf("Enter the values in the tree: \n");
    scanf("%d",&val);
    root = insert(root, val);
    for(i=0;i<n-1;i++)
    {
    	scanf("%d",&val);
    	insert(root, val);
    }
    printf("Enter the value to be searched: ");
    scanf("%d",&key);
    if (search(root, key) == NULL)
    {
    	printf("%d not found\n", key);
    }
    else
    {
    	printf("%d found\n", key);
    }
    return 0;
}
