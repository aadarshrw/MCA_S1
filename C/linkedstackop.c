#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *head = NULL;
int nodecount = 0;

Node *createNode(int);
void push();
void pop();
void search();
void display();
void line();

int main()
{
    int ch;
    while (1)
    {
        printf("\n\tLINKED STACK MENU\n1.Push\n2.Pop\n3.Search\n4.display\n99.exit");
        printf("\nenter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            search();
            break;
        case 4:
            display();
            break;
        case 99:
            printf("\nExiting....\n");
            return 0;
        default:
            printf("\nInvlid option Please enter a Valid option....\n");
            break;
        }
    }
    return 0;
}
Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void push()
{
    line();
    int data;
    printf("\nEnter the data: ");
    scanf("%d", &data);
    Node *newNode = createNode(data);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
    nodecount += 1;
    printf("\n%d pushed to stack.......\n",data);
    line();
}
void pop()
{
    line();
    if (head == NULL)
    {
        printf("UnderFlow...Linked stack is empty....");
    }
    else
    {
        Node *delNode;
        delNode = head;
        head = delNode->next;
        printf("%d poped out of linked stack", delNode->data);
        free(delNode);
    }
    line();
}
void search()
{
    line();
    if (head == NULL)
    {
        printf("Linked Stack is Empty!!!");
    }
    else
    {
        int item, isFound = 0, pos = 1;
        printf("\nEnter the item to search:");
        scanf("%d", &item);
        Node *temp;
        temp = head;
        while (temp != NULL)
        {
            if (item == temp->data)
            {
                printf("ITem found at Node : %d", pos);
                isFound = 1;
                break;
            }
            temp = temp->next;
            pos += 1;
        }
        if (!isFound)
        {
            printf("\nItem not found in the list");
        }
    }
    line();
}
void display()
{
    line();
    if (head == NULL)
    {
        printf("\nLinked stack is empty.....!!\n");
    }
    else
    {
        Node *temp;
        temp = head;
        while (temp != NULL)
        {
            printf("\n[ %d ][x]", temp->data);
            if (temp == head)
            {
                printf("<==[TOP]");
            }
            temp = temp->next;
        }
        printf("\n=========");
        printf("\n\nTotal Number of Nodes = %d ", nodecount);
    }
    line();
}
void line()
{
    printf("\n\n*****************************************************************************************************************\n\n");
}