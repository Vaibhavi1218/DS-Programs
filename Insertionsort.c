#include<stdio.h>
void print_arr(int[],int);
void main()
{

    int a[20],size,i;
    printf("enter no.of elements:");
    scanf("%d",&size);
    for(i=0; i<size; i++)
    {

        printf("enter element no is %d:",i+1);
        scanf("%d",&a[i]);
    }
    insertion_sort(a,size);
    print_arr(a,size);
}
void print_arr(int a[],int n)
{

    int i;
    printf("elements of the array:");
    for(i=0; i<n; i++)
    {

        printf("%d\t",a[i]);
    }
}
void insertion_sort(int a[],int n)
{

    int i,j,key;
    for(i=1; i<=n-1; i++)
    {

        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {

            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}