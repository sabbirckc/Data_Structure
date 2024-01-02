#include<stdio.h>
int main(){

    float balance, total_balance;
    char sex;
    scanf("%f %c", &balance,&sex);

    if(balance>50000){
        if(sex=='F'){
            printf("female accoutn \n");
            total_balance= balance+(balance*(5.0/100));
        }
        else if(sex=='M'){
            printf("non female accoutn \n");
            total_balance= balance+(balance*(2.0/100));
        }
        else{
            printf("Invalid gender\n");
        }
    }
    else{
            printf("ami gorib\n");
        total_balance= balance+(balance*(2.0/100));
    }

printf("total_balance = %f\n",total_balance);


return 0;
}

