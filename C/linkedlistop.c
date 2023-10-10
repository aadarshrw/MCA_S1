#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *head = NULL;
int nodecount = 0;

void create();
Node *createNode(int);
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
        printf("\n\tMENU\n1.Create\n2.Insert begining\n3.Insert Position\n4.delete Position\n5.Search\n6.display\n99.exit");
        printf("\nEnter your choice: ");
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
void create()
{
    line();
    if (head == NULL)
    {
        int n, data;
        printf("\nEnter the number of nodes: ");
        scanf("%d", &n);
        Node *newNode, *temp;
        for (int i = 1; i <= n; i++)
        {
            if (i == 1)
            {
                printf("\nenter the data: ");
                scanf("%d", &data);
                newNode = createNode(data);
                head = newNode;
                temp = head;
            }
            else
            {
                printf("\nEnter the data: ");
                scanf("%d", &data);
                newNode = createNode(data);
                temp->next = newNode;
                temp = newNode;
            }
        }
        temp->next = NULL;
        nodecount += n;
        printf("\nLinked list created successfully...\n");
    }
    else
    {
        printf("\nLinked list alredy Exsits....!!!]\n");
    }
    line();
}
Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void insertBeg()
{
    line();

    int data;
    printf("\nEnter the data: ");
    scanf("%d", &data);
    Node *newNode = createNode(data);
    newNode->next = head;
    head = newNode;
    nodecount += 1;
    printf("\nNode added successfully.......\n");

    line();
}
void insertPos()
{
    line();
    int pos = 0, data;
    printf("\nEnter the position:");
    scanf("%d", &pos);

    if (pos > 0 && pos <= nodecount)
    {
        Node *temp, *newNode;
        printf("\nEnter the data");
        scanf("%d", &data);
        newNode = createNode(data);
        if (pos == 1)
        {
            newNode->next = head;
            head = newNode;
        }
        else
        {
            temp = head;
            for (int i = 1; i < pos - 1; i++)
            {
                temp = temp->next;
            }

            newNode->next = temp->next;
            temp->next = newNode;
        }
        nodecount += 1;
        printf("Node added successfully!!!!");
    }
    else
    {
        printf("invlid position...Try again");
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
        printf("enter the position to be deleted: ");
        scanf("%d", &pos);
        if (pos > 0 && pos <= nodecount)
        {
            Node *temp, *nodeAtPos;
            if (pos == 1)
            {
                nodeAtPos = head;
                head = nodeAtPos->next;
            }
            else
            {
                temp = head;
                for (int i = 1; i < pos - 1; i++)
                {
                    temp = temp->next;
                }

                nodeAtPos = temp->next;
                temp->next = nodeAtPos->next;
            }
            free(nodeAtPos);
            printf("\nNode Deleted sucessfully!!!!");
            nodecount -= 1;
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
        printf("\nLinked list is empty.....!!\n");
    }
    else
    {
        Node *temp;
        temp = head;
        printf("[ START ]==>");
        while (temp != NULL)
        {
            printf("[ %d ][ x-]-->", temp->data);
            temp = temp->next;
        }
        printf("[ NULL ]");

        printf("\n\nTotal Number of Nodes = %d ", nodecount);
    }

    line();
}
void line()
{
    printf("\n\n*****************************************************************************************************************\n\n");
}
