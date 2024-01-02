#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("Enter the value= ");
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++)
    {
        arr[i]=rand()%100;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

   int new_arr[n];

   for(i=0;i<n;i++){
   new_arr[i]=arr[i];
   }
   for(i=0;i<n;i++)
{
   printf("%d\t",new_arr[i]);
   }

    return 0;
}
