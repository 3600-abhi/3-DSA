#include<stdio.h>
int main()
{
    int a[]={34,15,29,8};
    printf("Given Array : ");
    for(int i=0;i<4;i++)
        printf("%d ",a[i]);
    printf("\nSorted Array : ");
    bubble_sort(a,4);
    for(int i=0;i<4;i++)
        printf("%d ",a[i]);
    return 0;
}
void bubble_sort(int a[],int n)
{
    int temp;
    for(int round=1;round<n;round++)
    {
        for(int i=0;i<n-round;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}
