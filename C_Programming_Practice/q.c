#include<stdio.h>
int main()
{
    int i, n, sum=0;
      printf("Enter the last number=");
        scanf("%d",&n);
        //printf("1+2+3+4+5 %d",n);

        for(i=2;i<=n;i=i+2)
        {
            sum=sum+i;
        }
         printf("=%d",sum);
    }

