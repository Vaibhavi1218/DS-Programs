#include<stdio.h>
void partition(int a[], int lb, int ub);
void merge(int a[], int lb, int mid, int ub);
void print(int a[], int n);
void main()
{
  int a[10],i,n,lb,ub;
  printf("enter the size of array: ");
  scanf("%d",&n);
  printf("enter the array: ");
  for(i=0;i<n;i++)
  {
     scanf("%d",&a[i]);
  }
  lb=0,ub=n-1;
  partition(a,lb,ub);
  print(a,n);
}
void partition(int a[], int lb, int ub)
{
   int mid;
   if(lb<ub)
   {
      mid=(lb+ub)/2;    
      partition(a,lb, mid);
      partition(a,mid+1,ub);
      merge(a,lb,mid,ub);
   }
}
void merge(int a[], int lb, int mid, int ub)
{
   int i,j,k,temp[10];
   i=lb;
   k=lb;
   j=mid+1;
   while(i<=mid && j<=ub)
   {
       if(a[i]<a[j])
       {
          temp[k]=a[i];
          i++;k++;
       }
       else
       {
          temp[k]=a[j];
           j++;k++;
        }
      }
   if(i>mid)
   {
       while(j<=ub)
       {
           temp[k]=a[j];
           k++;j++;
       }
   }
   else
   {
       while(i<=mid)
       {
          temp[k]=a[i];
          k++;i++;
       }
   }
   for(k=lb;k<=ub;k++)
   {
      a[k]=temp[k];
    }
}
void print(int a[], int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }
}