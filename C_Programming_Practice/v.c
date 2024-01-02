#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter the n value= ");
    scanf("%d",&n);
    int a[n],a2[count];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
          printf("%d\t",a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d\t",a[i]);
        }
    }
    printf("\n");
    for(i=0;i<n;i++)//2 4 7 9 10
    {
        if(a[i]%2==0)
        {
          a2[count]=a[i];//2 4 10

          count++;

        }
    }
    printf("\n%d\n",count);
    for(i=count-1;i>=0;i--)
    {
          printf("%d,",a2[i]);
    }



    return 0;
}
