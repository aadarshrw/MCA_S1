#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *prev, *next;
} Node;

Node *head = NULL;
int nodeCount = 0;

Node *createNode();
void create();
void insertBeg();
void insertPos();
void deletePos();
void search();
void display();
void line();

int main()
{
    int ch;
    while (1)
    {
        printf("\nMENU\n1.Create\n2.Insert begining\n3.Insert Position\n4.Delete Position\n5.Search\n6.display\n99.Exit");

        printf("\n Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            insertBeg();
            break;
        case 3:
            insertPos();
            break;
        case 4:
            deletePos();
            break;
        case 5:
            search();
            break;
        case 6:
            display();
            break;
        case 99:
            printf("\nExiting....\n");
            return 0;
        default:
            printf("\nInvalid choice...Try again!!!\n");
            break;
        }
    }
    return 0;
}
Node *createNode()
{
    int data;
    Node *newNode = (Node *)(malloc(sizeof(Node)));
    printf("\nEnter the data: ");
    scanf("%d", &data);
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}
void create()
{
    line();
    if (head == NULL)
    {
        int limit;
        Node *newNode, *temp;
        printf("Enter the number of Nodes: ");
        scanf("%d", &limit);
        for (int i = 1; i <= limit; i++)
        {

            newNode = createNode();
            if (i == 1)
            {

                head = newNode;
                temp = head;
            }
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
        nodeCount += limit;
        printf("\nDoubly linked list created..!!");
    }
    else
    {
        printf("Doubly Linked list already exits...cannot create a new one!!!");
    }
    line();
}
void insertBeg()
{
    line();
    Node *newNode = createNode();
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    printf("New node inserted successfully");
    nodeCount += 1;
    line();
}
void insertPos()
{
    line();
    int pos = 0;
    printf("\nEnter the position:");
    scanf("%d", &pos);
    if (pos > 0 && pos <= nodeCount + 1)
    {
        Node *temp, *newNode;
        newNode = createNode();
        if (pos == 1)
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        else
        {
            temp = head;
            for (int i = 1; i < pos - 1; i++)
            {
                temp = temp->next;
            }

            if (temp->next == NULL)
            {
                temp->next = newNode;
                newNode->prev = temp;
            }
            else
            {
                printf("temp-%d", temp->data);
                newNode->prev = temp;
                newNode->next = temp->next;
                temp->next->prev = newNode;
                temp->next = newNode;
            }
        }
        nodeCount += 1;
        printf("Node added successfully!!!!");
    }
    else
    {
        printf("Invalid position...Try again");
    }
    line();
}
void deletePos()
{
    line();
    if (head == NULL)
    {
        printf("linked list emtpy!!!");
    }
    else
    {
        int pos;
        printf("Enter the position to be deleted: ");
        scanf("%d", &pos);
        if (pos > 0 && pos <= nodeCount)
        {
            Node *nodeAtPos;
            if (pos == 1)
            {
                nodeAtPos = head;
                head = nodeAtPos->next;
                head->prev = NULL;
            }
            else
            {
                nodeAtPos = head;
                for (int i = 1; i < pos; i++)
                {
                    nodeAtPos = nodeAtPos->next;
                }
                if (nodeAtPos->next == NULL)
                {
                    nodeAtPos->prev->next = NULL;
                }
                else
                {

                    nodeAtPos->next->prev = nodeAtPos->prev;
                    nodeAtPos->prev->next = nodeAtPos->next;
                }
            }
            free(nodeAtPos);
            printf("\nNode Deleted sucessfully!!!!");
            nodeCount -= 1;
        }
        else
        {
            printf("\nEnter a valid position!!!");
        }
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
                printf("Item found at Node : %d", pos);
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
        printf("\nLinked list is empty.....!!\n");
    }
    else
    {
        Node *temp;
        temp = head;
        printf("[ START ]==>");
        while (temp != NULL)
        {
            printf("<-[x][ %d ][x]->", temp->data);
            temp = temp->next;
        }
        printf("[ NULL ]");

        printf("\n\nTotal Number of Nodes = %d ", nodeCount);
    }

    line();
}
void line()
{
    printf("\n\n*****************************************************************************************************************\n\n");
}