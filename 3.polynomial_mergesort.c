#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of element in array to be entered : ");
    scanf("%d",&n);
    char a[n];
    printf("Enter list-");
    for(int i=0;i<n;i++)
    {
	    scanf("%c",&a[i]);
    }

    merge_sort(0, n-1,a);

    printf("\nSorted array is : ");
    for(int i=0;i<n;i++)
    {
         printf("%c ",a[i]);
    }
    return 0;
}
void merge_sort(char a,int lb,int ub)
{
    int mid;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
        merge_sort(a,lb,mid);
        merge_sort(a,mid+1,ub);
        merge(a,lb,mid ,ub);
    }
}
void merge(char a,int lb,int mid,int ub)
{
   int i=lb,j=mid+1,k=lb;
   char b[25];
   while(i<=mid && j<=ub)
   {
       if(a[i]<=a[j])
       {
           b[k]=a[i];
           i++;
       }
       else
       {
           b[k]=a[j];
           j++;
       }
       k++;
   }
   if(i>mid)
   {
       while(j<=ub)
       {
           b[k]=a[j];
           j++;
           k++;
       }
   }
   else
   {
       while(i<=mid)
       {
           b[k]=a[i];
           i++;
           k++;
       }
   }
   for(k=lb;k<=ub;k++)
    a[k]=b[k];
}

