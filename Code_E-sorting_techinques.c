#include <stdio.h>
int bubble_sort(int arr[],int sz)
{
    printf("sorted through bubble_sort:\t");
for(int i=0;i<sz-1;i++)
{
for(int j=0;j<sz-i-1;j++)
{
    if(arr[j]>arr[j+1])
    {
    int c=arr[j]; //swapping
    arr[j]=arr[j+1];
    arr[j+1]=c;
    }
}
}
for(int i=0;i<sz;i++)
{
    printf("%d\t",arr[i]);
}
printf("\n");
return 0;
}
int selection_sort(int arr[],int sz)
{
    printf("sorted through selection_sort:\t");
for(int i=0;i<sz-1;i++)
{
    int least_index=i;
for(int j=i+1;j<sz;j++)
{
if(arr[j]<arr[least_index])
{
    least_index=j;
}
}
int c=arr[least_index];
arr[least_index]=arr[i];
arr[i]=c;
}
for(int i=0;i<sz;i++)
{
    printf("%d\t",arr[i]);
}
printf("\n");
return 0;
}
int insertion_sort(int arr[],int sz)
{
    printf("sorted through insertion_sort:\t");
for(int i=1;i<sz;i++)
{
int curr=arr[i];
int prev=i-1;
while(prev>=0&&arr[prev]>curr){
    arr[prev+1]=arr[prev];
    prev--;
}
arr[prev+1]=curr;
}
for(int i=0;i<sz;i++)
{
    printf("%d\t",arr[i]);
}
return 0;
}
int main()
{
    int sz;
    printf("WELCOME TO E-SORTING FACTORY\n");
printf("enter size of array\t");
scanf("%d",&sz);
int arr[sz];
printf("enter numbers to be sorted\t");
for(int i=0;i<sz;i++)
{
    scanf("%d",&arr[i]);
}
bubble_sort(arr,sz);
selection_sort(arr,sz);
insertion_sort(arr,sz);
return 0;
}
