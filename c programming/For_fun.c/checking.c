#include<stdio.h>

int main(){
    float hours,alpha=0;
    printf("Enter the number of hours used :");
    scanf("%f",&hours);
    if(hours<=23.5){
    printf("The total amount billed is : %f",hours*20.0);
    }
else if (hours==24)
{
    printf("The total amount billed is :90 Rs");
}
else

printf("Enter the number of hours less than or equal to 24 hours. ");

    return 0;
}