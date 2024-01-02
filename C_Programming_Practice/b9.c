#include<stdio.h>
int main()
{
    int s,h,m,s1;
    printf("Enter the number of s=");
    scanf("%d",&s);

    h=s/3600;
    s=s%3600;
    m=s/60;
    s1=s%60;

    printf("h=%d\n",h);
    printf("m=%d\n",m);
    printf("s=%d\n",s1);





}
