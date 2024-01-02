#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,temp,new_a[i];
    printf("Enter the n value = ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        a[i]=rand()%100;
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=a[i];
    a[i]=new_a[i];
    new_a[i]=a[i];
    printf("%d",new_a[i]);
    }





    return 0;
}
