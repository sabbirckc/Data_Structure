#include<stdio.h>
int main()

{
    int m,n,sub;
    printf("Enter the value of m=");
    scanf("%d",&m);
    printf("Enter the value of n=");
    scanf("%d",&n);

     if(m>n)
     {
         sub=m-n;
         printf("%d",sub);
     }
     else if(n>m)
     {
         sub=n-m;
         printf("%d",sub);
     }
     else
     {
         sub=m-n;
         printf("%d",sub);
     }




}
