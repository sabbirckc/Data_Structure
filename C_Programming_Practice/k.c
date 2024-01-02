#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,temp=0;
    printf("Enter the n value = ");
    scanf("%d",&n);
    int a[n];

    for(i=0; i<n; i++)
    {
        a[i]=rand()%100;
     printf("%d\t",a[i]);

    }

    printf("\n");
    for(i=0; i<n; i++)
    {
         if(i<3)
           {
           temp=a[i];
           a[i]=a[i+1];
           a[i+1]=temp;
           }


        printf("%d,",a[i]);
    }

    return 0;
}
