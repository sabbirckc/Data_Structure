#include<stdio.h>

    void display()
    {
    for(int i=0;i<n-k;i++)
    {
        a[i]=a[i+k];
    }
    for(i=0;i<n-k;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=k;i<n;i++)
    {
      a[i]=0;
      printf("%d\t",a[i]);
    }
}
    int main()
{


    int n,i,k;
    printf("Enter the n value= ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the array value %d= ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
       printf("%d\t",a[i]);
    }
    printf("\n");
    printf("How much size you want k=");
    scanf("%d",&k);
    for(i=0;i<n-k;i++)
    {
        a[i]=a[i+k];
    }
    for(i=0;i<n-k;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=k;i<n;i++)
    {
      a[i]=0;
      printf("%d\t",a[i]);
    }


}
