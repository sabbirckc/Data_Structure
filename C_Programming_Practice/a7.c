#include<stdio.h>
int main()
{
    int A,B,C,result;
    float D;
    printf("enter the value of A=");
    scanf("%d",&A);
    printf("enter the value of B=");
    scanf("%d",&B);
    printf("enter the value of C=");
    scanf("%d",&C);
    printf("enter the value of D=");
    scanf("%f",&D);

    result= pow(A,C)+B*A-D/3;
    printf("result= %d",result);





}
