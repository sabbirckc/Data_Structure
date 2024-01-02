#include<stdio.h>
int main()
{
   int m;
   int n;
   int result;
    printf("Enter the value m & n:");

    scanf("%d",&m);
    scanf("%d",&n);



   result= pow(m,n);

 printf("%d^%d=%d",m,n,result);
    return 0;
}
