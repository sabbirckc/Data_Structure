#include<stdio.h>
int main()
{
    int mark;
    printf("Enter the mark= ");
    scanf("%d",&mark);
    if(mark>100 || mark<0)
        printf("The result is invalid");
    else if(mark>=80 && mark<=100)
        printf("A+");
    else if(mark>=70 && mark<=79)
        printf("A");
    else if(mark>=60 && mark<=59)
        printf("B");
    else if(mark>=50 && mark<=59)
        printf("c");
    else if(mark>=40 && mark<=49)
        printf("D");
    else if(mark>=33 && mark<=39)
        printf("D-");
    else
        printf("F");




    return 0;

}
