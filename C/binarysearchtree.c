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
        return node;
    }
    else if(key > node->key)
    {
        node->right = insert(node->right,key);
        return node;
    }
}
struct node* delete(struct node* root, int k)
{
	if (root == NULL)
	{
		return root;
	}
	if (root->key > k) 
	{
		root->left = delete(root->left, k);
		return root;
	}
	else if (root->key < k) 
	{
		root->right = delete(root->right, k);
		return root;
	}
	if (root->left == NULL) 
	{
		struct node* temp = root->right;
		free(root);
		return temp;
	}
	else if (root->right == NULL) 
	{
		struct node* temp = root->left;
		free(root);
		return temp;
	}
	else 
	{
		struct node* succParent = root;
		struct node* succ = root->right;
		while (succ->left != NULL) 
		{
			succParent = succ;
			succ = succ->left;
		}
		if (succParent != root)
		{
			succParent->left = succ->right;
		}
		else
		{
			succParent->right = succ->right;
		}
		root->key = succ->key;
		free(succ);
		return root;
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
void inorder(struct node* root)
{
    if (root != NULL) 
    {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}
int main()
{
    int val,n,i,key,deleteval;
    struct node* root = NULL;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    printf("Enter the values: \n");
    scanf("%d",&val);
    root = insert(root, val);
    for(i=-0;i<n-1;i++)
    {
        scanf("%d",&val);
        insert(root,val);
    }
    printf("The tree is : ");
    inorder(root);
    printf("\n");
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
    printf("Enter the value to be deleted: ");
    scanf("%d",&deleteval);
    delete(root, deleteval);
    printf("The tree after deletion is : ");
    inorder(root);
    printf("\n");
}