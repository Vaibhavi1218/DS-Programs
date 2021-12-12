#include <stdio.h>
#include <stdlib.h>

void print_arr(int[],int n);
void bubble_sort(int[],int );
int main()
{
    int a[20],size,i;
    printf("enter the number of the elements:");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("enter element no %d:",i+1);
        scanf("%d",&a[i]);
    }
    bubble_sort(a,size);
    print_arr(a,size);
}
void print_arr(int a[],int n)
{

    int i;
    printf("enter elements/t");
    for(i=0;i<n;i++)
    {

        printf("%d",a[i]);
    }
}
void bubble_sort(int a[],int n)
{

    int i,j,temp,flag;
    for(i=0;i<n-1;i++)
    {

        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {

                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        {

            printf("\nelements are sorted");
            break;
        }
    }
}