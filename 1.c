 #include<stdio.h>
 void insertion_sort(int [],int);
 int main()
 {
  int a[]={34,45,11,89,55,19,22,8,40};
   printf("Given Array : ");
  for(int i=0;i<9;i++)
    printf("%d ",a[i]);
  insertion_sort(a,9);
  printf("\nSorted Array : ");
  for(int i=0;i<9;i++)
    printf("%d ",a[i]);
  return 0;
 }
 void insertion_sort(int a[],int n)
 {
     int i,j,temp;
     for(i=1;i<n;i++)
     {
         temp=a[i];
         for(j=i-1;j>=0 && a[j]>temp; j--)
            a[j+1]=a[j];

         a[j+1]=temp;
     }
 }
