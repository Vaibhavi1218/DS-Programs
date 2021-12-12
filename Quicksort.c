#include<stdio.h>
void quick_sort(int a[],int ,int);
int main()
{
    int a[30],n,i;
    printf("Enter no. of elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
      printf("\n Enter element:",i+1);
      scanf("%d",&a[i]);
    }
    quick_sort(a,0,n-1);
    printf("The quick sorted elements are:\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
void quick_sort(int a[],int start,int end)
{
    int i,j,k,pivot;
    if(start<end)
    {
        pivot=start;
        i=start;
        j=end;
        while(i<j)
        {
            while(a[i]<=a[pivot] && i<end)
            {
                i++;
            }
            while(a[j]>a[pivot])
            {
                j--;
            }
            if(i<j)
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
        k=a[j];
        a[j]=a[pivot];
        a[pivot]=k;
        quick_sort(a,start,j-1);
        quick_sort(a,j+1,end);
    }
}