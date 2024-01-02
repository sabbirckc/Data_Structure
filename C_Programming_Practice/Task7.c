#include<stdio.h>
int main()
{
    int A,B,C,result;
    float D;

    printf("Enter rhe value:");
    scanf("%d\n%d\n%d\n%f",&A,&B,&C,&D);

    result=pow(A,C)+B*A-D/3;

    printf("result=%d",result);
    return 0;
}
