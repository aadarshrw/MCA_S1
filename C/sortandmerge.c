#include<stdio.h>
void sort(int array[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(array[j]<array[i])
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}
void display(int array[],int n)
{
	printf("The array is \n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
}
int main()
{
	int a[10],b[10],c[20],m,n,i,j;
	printf("Enter the number of elements in the 1st array: ");
	scanf("%d",&m);
	printf("Enter the number of elements in the 2nd array: ");
	scanf("%d",&n);
	printf("Enter the elements of the 1st array:\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the elements of the 2nd array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	sort(a,m);
	sort(b,n);
	for(i=0;i<m;i++)
	{
		c[i] = a[i];
	}
	for(i=0,j=m;j<(m+n) && i<n;i++,j++)
	{
		c[j] = b[i];
	}
	sort(c,m+n);
	display(c,m+n);
	return 0;
}
