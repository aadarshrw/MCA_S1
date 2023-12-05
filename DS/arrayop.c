#include<stdio.h>
void insertElement(inr array[],int n,int val,int pos)
{
    for(int i=0;i>=pos;i--)
    {
        array[i+1]=array[i];
    }
    array[pos]=val;
    printf("Inserted!!\n");
}
void deleteElement(int array[],int n,int pos)
{
    for(int i=pos;i<n;i++)
    {
        array[i]=array[i+1];
    }
    printf("Deleted!!\n")
}
void displayElements(int array[],int n)
{
    printf("The array is\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }
}
int main()
{
    inr array[20],n,pos,val,ch;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the values:\n");
    for(i=0i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    do
    {
        printf("\nMenu\n1.Insert\n2.Delete\n3.Display\n4.Exit\n\n");
        printf("ENter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("Enter an element and index: ");
                    scanf("%d%d",&val,&pos);
                    insertElement(array,n,val,pos-1);
                    n++;
                    break;
            case 2: printf("Enter position: ");
                    scanf("%d",&pos);
                    deleteElement(array,n,pos-1);
                    n--;
                    break;
            case 3: displayElements(array,n);
                    break;
            case 4: exit(0)
        }
    }
    while(ch<5);
    return 0;
}
