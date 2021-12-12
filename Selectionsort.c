#include <stdio.h>
#include <stdlib.h>

void print_arr(int[],int n);
void selection_sort(int[],int n);
int main()
{
    int a[20],n,i;
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("elements in the array:");
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
    selection_sort(a,n);
    print_arr(a,n);
}
void print_arr(int a[],int n)
{

    int i;
    printf("elements of the array:/t");
    for(i=0;i<n;i++)
    {

        printf("%d",a[i]);
    }
    }
void selection_sort(int a[],int n)
{

    int min,i,j,temp;
    for(i=0;i<n-1;i++)
    {

        min=i;
        for(j=i+1;j<n;j++)
        {

            if(a[j]<a[min])
                min=j;
        }
        if(i!=j)
        {

            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
}