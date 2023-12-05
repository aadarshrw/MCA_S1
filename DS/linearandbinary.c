#include <stdio.h>

int arr[100], n = 0;
void readArray();
void display();
void linear();
void binary();
void line();

int main()
{
    int ch;

    while (1)
    {
        printf("\nMENU\n1.Input the Elements\n2.Display the Array\n3.Linear Search\n4.Binary Search\n99.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1: readArray();
                break;
        case 2: display();
                break;
        case 3: linear();
                break;
        case 4: binary();
                break;
        case 99:printf("Exiting......\n");
                return 0;
        default:printf("Invlid choice!!!");
                break;
        }
    }
    return 0;
}
void readArray()
{
    line();
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    line();
}
void display()
{
    line();
    if (n != 0)
    {
        printf("The array is: ");
        for (int i = 0; i < n; i++)
        {
            printf(" %d ", arr[i]);
        }
    }
    else
    {
        printf("Array is empty!!");
    }
    line();
}
void linear()
{
    line();
    if (n != 0)
    {
        int item, isFound = 0;
        printf("Enter the item: ");
        scanf("%d", &item);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == item)
            {
                printf("Item found at position %d!!!", i + 1);
                isFound = 1;
                break;
            }
        }
        if (!isFound)
        {
            printf("Item Not Found!!");
        }
    }
    else
    {
        printf("Array is empty!!");
    }

    line();
}
void binary()
{
    line();
    if (n != 0)
    {
        int item;
        printf("Enter the item: ");
        scanf("%d", &item);
        int *temp = arr;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        int lb = 0, ub = n - 1, mid, flag = 0;
        while (lb <= ub)
        {
            mid = (lb + ub) / 2;
            if (item == temp[mid] || item == temp[1])
            {
                printf("Item found!!");
                flag = 1;
                break;
            }
            else if (temp[mid] < item)
            {
                lb = mid + 1;
            }
            else
            {
                ub = mid - 1;
            }
        }
        if (!flag)
        {
            printf("Item not found!!");
        }
    }
    else
    {
        printf("Array is empty!!");
    }
    line();
}
void line()
{
    printf("\n********************\n");
}