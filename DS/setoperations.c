#include<stdio.h>
#include<stdlib.h>
void display(int *arr);
void line();
int u[10] = {10,20,30,40,50,60,70,80,90,100};
int main()
{
    int univer[10] = {1,1,1,1,1,1,1,1,1,1};
    int a[10],b[10];
    int uni[10],inter[10],adiffb[10],bdiffa[10],i,choice;

    printf("universal : "); 
    display(univer);
    printf("\nEnter set A(bitstring): \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter set B(bitstring): \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("set A: ");
    display(a);
    printf("\nset B: ");
    display(b);

    operat:
    line();
    printf("\n1. Union\n2. Intersection\n3. A Difference B\n4. B Difference A\n5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    line();
    switch(choice)
    {
        case 1: printf("A union B: ");
                for(i=0;i<10;i++)
                {
                    uni[i] = a[i] || b[i];
                }
                display(uni);
                break;
        case 2: printf("A Intersection B: ");
                for(i=0;i<10;i++)
                {
                    inter[i] = a[i] && b[i];
                }
                display(inter);
                break;
        case 3: printf("A difference B: ");
                for(i=0;i<10;i++)
                {
                    if(a[i] > b[i])
                    {
                        adiffb[i] = a[i] - b[i];
                    }
                }
                display(adiffb);
                break;
        case 4: printf("B difference A: ");
                for(i=0;i<10;i++)
                {
                    if(b[i] > a[i])
                    {
                        bdiffa[i] = b[i] - a[i];
                    }
                }
                display(bdiffa);
                break;
        case 5: exit(0);
        default: printf("\nEnter a valid value!!!\n");
    }
    goto operat;
    return 0;
} 
void display(int *arr)
{
    int *ar = arr,i;
    for(i=0;i<10;i++)
    {
        if(*ar == 1)
        {
            printf("%d, ",u[i]);
        }
        ar++;
    }
}
void line()
{
    printf("\n-------------------------\n");
}
