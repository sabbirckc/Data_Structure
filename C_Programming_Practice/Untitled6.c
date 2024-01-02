#include<stdio.h>
int main()
{
    while(1){
    int i,s,a;
    printf("Enter the number= ");
    scanf("%d",&s);
    for(i=1;i<=10;i++)
    {a=s*i;
    printf("%d * %d = %d\n",s,i,a);
    }



    }
    return 0;
}
