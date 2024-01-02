#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the n value= ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=rand()%100;
        arr[n]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            printf("\neven num= %d",arr[i]);
        }
        else
        printf("\nOdd number= %d",arr[i]);
    }






    return 0;
}
