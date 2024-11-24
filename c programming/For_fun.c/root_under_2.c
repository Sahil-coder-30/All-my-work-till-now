#include<stdio.h>
#include<math.h>

int main(){
    double Root;
    double Number ;
    printf("Enter the value : ");
    scanf("%lf",&Number);
    Root=sqrt(Number);
    printf("The root of this is : %.2f",Root);

    return 0;
}