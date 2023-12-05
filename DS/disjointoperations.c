#include<stdio.h>
int a[20],b[20],c[20],m,n,i,flag = 0;
void line();
void Create();
void Display(int *arr,int limit);
void Union(int m, int n);
void Find(int i);
int main()
{
    int f;
    line();
    Create();
    line();
    Union(m,n);
    printf("The union is: ");
    Display(c,m+n);
    line();
    printf("Enter the key: ");
    scanf("%d",&f);
    Find(f);
    return 0;
}
void Create()
{
    printf("Enter the limit of the first set: ");
    scanf("%d",&m);
    printf("Enter the first set: \n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the limit of the second set: ");
    scanf("%d",&n);
    printf("Enter the second set: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("The first set is: ");
    Display(a,m);
    printf("\nThe second set is: ");
    Display(b,n);
}
void Display(int *arr,int limit)
{
    int *ar = arr;
    for(i=0;i<limit;i++)
    {
        printf("%d, ",ar[i]);
    }
}
void Union(int m, int n)
{
    for(i=0;i<m;i++)
    {
        c[i] = a[i];
    }
    for(i=0;i<n;i++)
    {
        c[i+m] = b[i];
    }
}
void Find(int k)
{
    for(i=0;i<m;i++)
    {
        if(a[i] == k)
        {
            printf("The parent is %d\n",a[0]);
            flag = 1;
        }
    }
    for(i=0;i<n;i++)
    {
        if(b[i] == k)
        {
            printf("The parent is %d\n",b[0]);
            flag = 1;
        }
    }
    if(flag == 0)
    {
        printf("The element is not in both sets!!!\n");
    }
}
void line()
{
    printf("\n-------------------------\n");
}

