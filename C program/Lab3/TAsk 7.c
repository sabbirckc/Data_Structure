#include<stdio.h>
int main()
{
    int n,i,sum=0,count;
    float ava;

    printf("Enter the number n=");
    for(i=1;i<=10;i++)
    {
         scanf("%d",&n);
         if(n%2!=0)
         sum=sum+n;
         count++;
    }
    ava=sum/count;
    printf("sum=%d\n",sum);
    printf("avarage=%.1f\n",ava);

    return 0;
}
