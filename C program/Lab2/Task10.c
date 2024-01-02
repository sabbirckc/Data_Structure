#include<stdio.h>
int main()
{
    int num,salary;
    printf("Enter the value:");
    scanf("%d",&num);

    if((num<=168)&&(num>40))
    {salary=8000+(num-40)*300;
    printf("salary1=%d",salary);
    }
    else if((num<=40)&&(num>=0))
    {
        salary=num*200;
        printf("salary2=%d",salary);
    }
    else if(num<0)
    {
        printf("Hour cannot be negative");
    }
    else
    {
        printf("Impossible to work more than 168 hours weekly");
    }
    return 0;


}
