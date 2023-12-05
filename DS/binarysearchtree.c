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
void line()
{
    printf("------------------------------\n");
}
int main()
{
    int val,n,i,key,deleteval,choice;
    struct node* root = NULL;
    operat:
    line();
    printf("1. Insertion\n2. Deletion\n3. Search\n4. Inorder Traversal\n5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    line();
    switch(choice)
    {
        case 1: printf("Enter the value: ");
                scanf("%d",&val);
                root = insert(root,val);
                break;
        case 2: printf("Enter the value to be deleted: ");
                scanf("%d",&deleteval);
                delete(root, deleteval);
                break;
        case 3: printf("Enter the value to be searched: ");
                scanf("%d",&key);
                if (search(root, key) == NULL)
                {
    	            printf("%d not found\n", key);
                }
                else
                {
    	            printf("%d found\n", key);
                }
                break;
        case 4: printf("The tree is : ");
                inorder(root);
                printf("\n");
                break;
        case 5: exit(0);
        default: printf("Please enter a valid number!!!\n");
    }
    goto operat;
}