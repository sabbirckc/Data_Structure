#include<stdio.h>
int main()
{
    int m,n,sum,product,difference;
    printf("Enter the value:");
    scanf("%d%d",&m,&n);

    sum= m+n;
    product= m*n;
    difference= m-n;

    printf("Sum is=%d\n",sum);
    printf("Product is=%d\n",product);
    printf("Difference is=%d\n",difference);

    return 0;
}
