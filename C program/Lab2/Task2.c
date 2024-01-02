#include<stdio.h>
#include<math.h>
int main()

{
    float c,area,circumference;
    printf("Enter the value of c:");
    scanf("%f",&c);

    area = M_PI*(c*c);
    circumference = 2*M_PI*c;

    printf("The area is = %f\n",area);
    printf("The circumference is = %f\n",circumference);


    return 0;

}
